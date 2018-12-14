#pragma once
#include "pch.h"
#include "Response.h"
#include "Opponent.h"
#include "Player.h"
#include <iostream>
#include <vector>

using namespace std;

class Scene
{
private:
	Opponent opponent;
	Player player;
	vector <Response> playerDialogue;
	vector <Response> opponentDialogue;
public:
	Scene();
	Scene(Player player, Opponent opponent, vector<Response> playerDialouge, vector<Response> opponentDialouge);
	int runScene();
	void makeSelection();
	void changePlayerDialogue();
};

