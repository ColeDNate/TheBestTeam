// CutthroatBusiness.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Response.h"
#include "Opponent.h"
#include "Player.h"
#include "Scene.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void printTitle();
void displayMenuOptions();
vector<Response> setPlayerResponses();
vector<Response> setOpponentResponses();

//Main
int main(){
	printTitle();


	/*** MAIN MENU ***/
	string playerChoice;
	int score = 0;
	
	string names[] = { "John Doe", "Mark Alderstein", "Cynthia Lafoyette" };
	vector<Response> playerDialogue = setPlayerResponses();
	vector<Response> opponentDialogue = setOpponentResponses();

	Player player;
	Scene actionScene;
	Opponent opponent;

	

	
	do {
		displayMenuOptions();
		cin >> playerChoice;

		//scene implementation
		if (playerChoice == "1"){
			opponent = Opponent(names[rand() % 4]);
			actionScene = Scene(player, opponent, playerDialogue, opponentDialogue);

			cout << "\n\n\nLet the sales begin!\n\n";
			score += actionScene.runScene();
			cout << "Your new score ";
		}
		//check current score
		else if (playerChoice == "2"){
			cout << "Your current score is " << score << "\n";
		}
		//exit
		else if (playerChoice == "3"){
			cout << "Goodbye, and thank you for playing...\n";
			printTitle();
		}
		else{
			cout << "INVALID CHOICE";
		}
	} while (playerChoice != "3");
}


void printTitle(){
	cout << "_________         __    __  .__                        __   \n";
	cout << "\\_   ___ \\ __ ___/  |__/  |_|  |_________  _________ _/  |_ \n";
	cout << "/    \\  \\/|  |  \\   __\\   __\\  |  \\_  __ \\/  _ \\__  \\   ___\\\n";
	cout << "\\     \\___|  |  /|  |  |  | |   Y  \\  | \\(  <_> ) __ \\|  |  \n";
	cout << " \\______  /____/ |__|  |__| |___|  /__|   \\____(____  /__|  \n";
	cout << "        \\/                       \\/                 \\/      \n";
	cout << "__________             .__                                  \n";
	cout << "\\______   \\__ __  _____|__| ____   ____   ______ ______     \n";
	cout << " |    |  _/  |  \\/  ___/  |/    \\_/ __ \\ /  ___//  ___/     \n";
	cout << " |    |   \\  |  /\\___ \\|  |   |  \\  ___/ \\___ \\ \\___ \\      \n";
	cout << " |______  /____//____  >__|___|  /\\___  >____  >____  >     \n";
	cout << "        \\/           \\/        \\/     \\/     \\/     \\/  \n\n";
}


void displayMenuOptions() {
	cout << "Welcome, challenger!\n";
	cout << "All choices are made by submitting a number corresponding to an option\n";
	cout << "  ---Main Menu------ \n";
	cout << " |(1) Seek opponent |\n";
	cout << " |(2) Check stats   |\n";
	cout << " |(3) Quit          |\n";
	cout << "  ------------------ \n";
	cout << "Your selection: ";
}

vector<Response> setPlayerResponses() {
	vector<Response> responses;
	Response response;

	response = Response(Response::Type::Afraid, "There's nothing to be afraid of with a 2-year warranty!");
	responses.push_back(response);

	response = Response(Response::Type::Angry, "A reasonable person would like a product like this!");
	responses.push_back(response);

	response = Response(Response::Type::Skeptical, "The possibilities are  endless when it comes to our product's usefulness!");
	responses.push_back(response);

	response = Response(Response::Type::Bored, "This product is a great cure for boredom! It will bring excitement to your life where there once was none!");
	responses.push_back(response);

	response = Response(Response::Type::Overwhelmed, "Understanding is made easy with our pocket manuals!");
	responses.push_back(response);

	response = Response(Response::Type::Sad, "All of the work put into making this will go to waste if no one buys it!");
	responses.push_back(response);

	response = Response(Response::Type::Trusting, "It sounds like you want to buy, why are we beating around the bush?");
	responses.push_back(response);

	return responses;
}

vector<Response> setOpponentResponses() {
	vector<Response> responses;
	Response response;

	response = Response(Response::Type::Afraid, "I'm starting to think I don’t want something that terrifying!");
	responses.push_back(response);

	response = Response(Response::Type::Angry, "It should be illegal to peddle garbage like this!");
	responses.push_back(response);

	response = Response(Response::Type::Skeptical, "I don't know... what use does such a thing even have?");
	responses.push_back(response);

	response = Response(Response::Type::Bored, "I'm getting kind of bored. This conversation is really boring.");
	responses.push_back(response);

	response = Response(Response::Type::Overwhelmed, "Whoah, take it easy! This is a lot to take in.");
	responses.push_back(response);

	response = Response(Response::Type::Sad, "Just thinking about the sweatshop this must have been made in makes me so sad...");
	responses.push_back(response);

	response = Response(Response::Type::Trusting, "Maybe buying this wouldn't be such a bad idea.");
	responses.push_back(response);

	return responses;
}

/*
Afraid
Opponent
I’m starting to think I don’t want something that terrifying!
Player
“There’s nothing to be afraid of with a 2-year warranty!”


Apprehensive
Opponent
"Stuff like this concerns me…"
Player

Angry
Opponent
“It should be illegal to peddle garbage like this!”
Player
“A reasonable person would like a product like this!”

Nervous
Opponent
Player

Skeptical
Opponent
“I don’t know… what use does such a thing even have?”
Player
“The possibilities are  endless when it comes to our product’s usefulness!”

Bored
Opponent
“I’m getting kind of bored. This conversation is really boring.”
Player
“This product is a great cure for boredom! It will bring excitement to your life where there once was none!”

Overwhelmed
Opponent
“Whoah, take it easy! This is a lot to take in.”
Player
“Understanding is made easy with our pocket manuals!”

Sad
Opponent
“Just thinking about the sweatshop this must have been made in makes me so sad...”
Player
“All of the work put into making this will go to waste if no one buys it!”

Trusting
Opponent
“You do make a lot of good points.”
Player
“It sounds like you want to buy, why are we beating around the bush?”

Breakdown
Opponent
Player

*/