#pragma once
#include "pch.h"
#include "Response.h"
#include "Opponent.h"
#include "Player.h"
#include <iostream>

using namespace std;

class Scene
{
private:
	Opponent opponent;
	Player player;
	Response *playerDialogue;
	Response *opponentDialogue;
public:
	Scene();
	Scene(Player player, Opponent opponent, Response playerDialouge[], Response opponentDialouge[]);
	void runScene();
};

