#pragma once

#include "pch.h"
#include <iostream>

using namespace std;


class Response
{
public:
	/*** ENUMERATION ***/
	enum Type { Angry, Afraid, Aprehensive, Skeptical, Bored, Overwhelmed, Trusting };


private:
	/*** VARIABLES ***/
	string text;
	Type type;

public:

	//constructors
	Response();
	Response(Type type, string text);
	//Functions
	void setText(string newText);
	string getText();
	void setType(Type newType);
	Type getType();
	bool compareOtherType(Response other);
};
