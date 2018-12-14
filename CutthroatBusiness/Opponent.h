#pragma once

#include <iostream>
#include "Response.h"

using namespace std;


class Opponent
{
private:
	string name;
	Response response;
	string introText;
	string lossText;
	string winText;
public:
	Opponent();
	Opponent(string name);
	void setName(string name);
	void generateResponses();
	void setResponse(Response response);
	Response getResponse();
	string getIntro();
	string getLoss();
	string getWin();
};

