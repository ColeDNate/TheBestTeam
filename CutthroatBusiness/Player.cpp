
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

//response 1
void Player::setResponse1(Response response) {
	response1 = response;
}
Response Player::getResponse1() {
	return response1;
}

//response 2
void Player::setResponse2(Response response) {
	response2 = response;
}
Response Player::getResponse2() {
	return response2;
}

//response 3
void Player::setResponse3(Response response) {
	response3 = response;
}
Response Player::getResponse3() {
	return response3;
}

//response 4
void Player::setResponse4(Response response) {
	response4 = response;
}
Response Player::getResponse4() {
	return response4;
}