// CutthroatBusiness.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Response.h"
#include "Opponent.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Opponent;
void printTitle();
void mainMenu();

//Main
int main(){
	printTitle();
	mainMenu();
}


void printTitle(){
	cout << "_________         __    __  .__                        __   \n";
	cout << "\\_   ___ \\ __ ___/  |__/  |_|  |_________  _________ _/  |_ \n";
	cout << "/    \\  \\/|  |  \\   __\\   __\\  |  \\_  __ \\/  _ \\__  \\   ___\\\n";
	cout << "\\     \\___|  |  /|  |  |  | |   Y  \\  | \\(  <_> ) __ \\|  |  \n";
	cout << " \\______  /____/ |__|  |__| |___|  /__|   \\____(____  /__|  \n";
	cout << "        \\/                       \\/                 \\/      \n";
	cout << "__________             .__                                  \n";
	cout << "\\______   \\__ __  _____|__| ____   ____   ______ ______     \n";
	cout << " |    |  _/  |  \\/  ___/  |/    \\_/ __ \\ /  ___//  ___/     \n";
	cout << " |    |   \\  |  /\\___ \\|  |   |  \\  ___/ \\___ \\ \\___ \\      \n";
	cout << " |______  /____//____  >__|___|  /\\___  >____  >____  >     \n";
	cout << "        \\/           \\/        \\/     \\/     \\/     \\/  \n";
}


void mainMenu() {
	string playerChoice = "";
	int score = 0;

	cout << "Welcome, challenger!\n";
	cout << "All choices are made by submitting a number corresponding to an option\n";
	while (playerChoice != "3")
	{
		cout << "----Main Menu------\n";
		cout << "|(1) Seek opponent|\n";
		cout << "|(2) Check stats  |\n";
		cout << "|(3) Quit         |\n";
		cout << "-------------------\n";
		cin >> playerChoice;
		if (playerChoice == "1")
		{
			score += 0;
			cout << "Your new score ";
		}
		else if (playerChoice == "2")
		{
			cout << "Your current score is " << score << "\n";
		}
		else if (playerChoice == "3")
		{
			cout << "Goodbye, and thank you for playing...\n";
			printTitle();
		}
		else
		{
			cout << "INVALID CHOICE";
		}
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
