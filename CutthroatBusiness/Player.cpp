
#pragma once

#include "pch.h"
#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{

}

Player::Player(Response choice1, Response choice2, Response choice3, Response choice4)
{
	setResponse1(choice1);
	setResponse2(choice2);
	setResponse3(choice3);
	setResponse4(choice4);
}

void Player::setResponse1(Response response) {
	response1 = response;
}
void Player::setResponse2(Response response) {
	response2 = response;
}
void Player::setResponse3(Response response) {
	response3 = response;
}
void Player::setResponse4(Response response) {
	response4 = response;
}