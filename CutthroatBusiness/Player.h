



#pragma once

#include "Response.h"
#include <iostream>

using namespace std;

class Player
{
private:
	Response response1;
	Response response2;
	Response response3;
	Response response4;
public:
	Player();
	Player(Response choice1, Response choice2, Response choice3, Response choice4);
	void setResponse1(Response response);
	void setResponse2(Response response);
	void setResponse3(Response response);
	void setResponse4(Response response);
};

