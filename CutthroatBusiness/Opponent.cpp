#include "pch.h"
#include "Opponent.h"

using namespace std;


Opponent::Opponent()
{
	setName("John Doe");
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

string Opponent::getName() {
	return name;
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


