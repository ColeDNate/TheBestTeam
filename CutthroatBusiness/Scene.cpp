#include "pch.h"
#include "Scene.h"
#include <iostream>
#include <string>

using namespace std;

Scene::Scene(){

}


Scene::Scene(Player player, Opponent opponent, Response playerDialogue[], Response opponentDialogue[]){
	this->player = player;
	this->opponent = opponent;
	delete[] playerDialogue;
	this->playerDialogue = playerDialogue;
	delete[] opponentDialogue;
	this->opponentDialogue = opponentDialogue;
}

void Scene::runScene() {
	int score = 5;

	cout << opponent.getIntro();
	do {
		
	} while (score > 0 && score < 10);

}

void makeSelection() {

}
