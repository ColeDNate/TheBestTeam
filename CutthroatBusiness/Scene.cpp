#include "pch.h"
#include "Scene.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

Scene::Scene(){

}


Scene::Scene(Player player, Opponent opponent, vector<Response> playerDialogue, vector<Response> opponentDialogue){
	this->player = player;
	this->opponent = opponent;
	this->playerDialogue = playerDialogue;
	this->opponentDialogue = opponentDialogue;
}

int Scene::runScene() {
	int score = 5;

	cout << opponent.getIntro();
	do {
		cout << opponent.getResponse().getText();

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

void Scene::makeSelection() {
	cout << "Make your selection\n";
	cout << "  ------------------------------------------\n";
	cout << " |(1)" << player.getResponse1().getText() << endl;
	cout << " |(2)" << player.getResponse2().getText() << endl;
	cout << " |(3)" << player.getResponse3().getText() << endl;
	cout << " |(4)" << player.getResponse4().getText() << endl;
	cout << "  ------------------------------------------ \n";
}


void Scene::changePlayerDialogue() {
	int random;
	int selection1 = -1;
	int selection2 = -1;
	int selection3 = -1;
	int selection4 = -1;
	bool notFilled = true;

	selection2 = rand() % playerDialogue.size();

	do {
		random = rand() % playerDialogue.size();
		if (random != selection1) {
			selection2 = random;
			notFilled = false;
		}
	} while (notFilled);

	notFilled = true;
	do {
		random = rand() % playerDialogue.size();
		if (random != selection1 &&
			random != selection2) {
			selection3 = random;
			notFilled = false;
		}
	} while (notFilled);

	notFilled = true;
	do {
		random = rand() % playerDialogue.size();
		if (random != selection1 &&
			random != selection2 &&
			random != selection3) {
			selection4 = random;
			notFilled = false;
		}
	} while (notFilled);

	player = new Player(playerDialogue.at(selection1), playerDialogue.at(selection2), 
						playerDialogue.at(selection3), playerDialogue.at(selection4));

}