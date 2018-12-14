#include "pch.h"
#include "Scene.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

Scene::Scene(){
	player = Player();
	opponent = Opponent();
	playerDialogue = vector<Response>();
	opponentDialogue = vector<Response>();
}


Scene::Scene(Player player, Opponent opponent, vector<Response> playerDialogue, vector<Response> opponentDialogue){
	this->player = player;
	this->opponent = opponent;

	for (int i = 0; i < playerDialogue.size(); i++) {
		this->playerDialogue.push_back(playerDialogue.at(i));
	}
	for (int i = 0; i < opponentDialogue.size(); i++) {
		this->opponentDialogue.push_back(opponentDialogue.at(i));
	}
}

int Scene::runScene() {
	int dialogueSize;
	int score = 5;
	bool moveSuccess = true;

	cout << opponent.getIntro() << "\n\n";
	do {
		cout << opponent.getResponse().getText();
		//change player dialogue
		changePlayerDialogue();
		//change the opponent's response
		dialogueSize = opponentDialogue.size();
		opponent.setResponse(opponentDialogue.at(rand() % dialogueSize));
		
		//display opponent guage and dialogue
		cout << opponent.getName() << "|";
		for (int i = 0; i < 10; i++) {
			if (i < score) {
				cout << "+";
			}
			if (i == score) {
				cout << "0";
			}
			else if (i > score){
				cout << "-";
			}
		}
		cout << "|\n";
		cout<< opponent.getResponse().getText();
		
		moveSuccess = makePlay(opponent.getResponse());

		if (moveSuccess == true) {
			cout << "\n\n" << "That was a favorable response!\n\n\n";
			score++;
		}
		else {
			cout << "\n\n" << "That was a poor response.\n\n\n";
			score--;
		}

	} while (score > 0 && score < 10);

	if (score == 10) {
		cout << opponent.getWin();
		return 5;
	}
	else {
		cout << opponent.getLoss();
		return 0;
	}
}

bool Scene::makePlay(Response respondTo) {
	string playerChoice;
	bool success = false;

	cout << "\n        How will you respond?\n";
	cout << "  ------------------------------------------\n";
	cout << " |(1) " << player.getResponse1().getText() << endl;
	cout << " |(2) " << player.getResponse2().getText() << endl;
	cout << " |(3) " << player.getResponse3().getText() << endl;
	cout << " |(4) " << player.getResponse4().getText() << endl;
	cout << "  ------------------------------------------ \n";
	cout << "Your selection: ";

	do
	{
		cin >> playerChoice;
		if (playerChoice == "1"){
			if (player.getResponse1().compareOtherType(respondTo)) {
				success = true;
			}
		}
		else if (playerChoice == "2"){
			if (player.getResponse2().compareOtherType(respondTo)) {
				success = true;
			}
		}
		else if (playerChoice == "3"){
			if (player.getResponse3().compareOtherType(respondTo)) {
				success = true;
			}
		}
		else if (playerChoice == "4"){
			if (player.getResponse4().compareOtherType(respondTo)) {
				success = true;
			}
		}
		else {
			cout << "INVALID CHOICE";
			playerChoice = "5";
			success = false;
		}
	} while (playerChoice == "5");

	return success;
}


void Scene::changePlayerDialogue() {
	int size;
	int random;
	int selection1 = 1;
	int selection2 = 1;
	int selection3 = 1;
	int selection4 = 1;
	bool notFilled = true;

	size = playerDialogue.size();

	selection1 = rand() % size;

	do {
		random = rand() % size;
		if (random != selection1) {
			selection2 = random;
			notFilled = false;
		}
	} while (notFilled);

	notFilled = true;
	do {
		random = rand() % size;
		if (random != selection1 &&
			random != selection2) {
			selection3 = random;
			notFilled = false;
		}
	} while (notFilled);

	notFilled = true;
	do {
		random = rand() % size;
		if (random != selection1 &&
			random != selection2 &&
			random != selection3) {
			selection4 = random;
			notFilled = false;
		}
	} while (notFilled);

	player = Player(playerDialogue.at(selection1), playerDialogue.at(selection2), 
						playerDialogue.at(selection3), playerDialogue.at(selection4));

}