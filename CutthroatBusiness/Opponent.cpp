#include "pch.h"
#include "Opponent.h"

using namespace std;


Opponent::Opponent()
{
	setName("John Doe");
	progress = 5;
	generateResponses();
}
Opponent::Opponent(string name)
{
	this->name = name;
	generateResponses();
}


/*** FUNCTIONS ***/
//set the responses
void Opponent::generateResponses()
{
	introText = "What's this about a product?";
	lossText = "I've had it! Take your con elsewhere, swindler!";
	winText = "You make a strong argument. I'll take it!";
}
//get progress
string Opponent::getProgress()
{
	string returnText = "LOSS|";
	for (int i = 0; i <= 10; i++)
	{
		if (i == progress)
			returnText += "O";
		else
			returnText += "-";
	}
	returnText += "|WIN\n";
	return returnText;
}

//set the response
void Opponent::setResponse(Response response) {
	this->response = response;
}
Response Opponent::getResponse() {
	return response;
}

void Opponent::setName(string newname) {
	name = newname;
}
//get intro text
string Opponent::getIntro(){
	return name + ": " + introText + "\n";
}

//get loss text
string Opponent::getLoss(){
	return name + ": " + lossText + "\n";
}

//get win text
string Opponent::getWin(){
	return name + ": " + winText + "\n";
}


