#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Game
{
private:
	int randNum = rand() % 5;
	string letter;

	vector<string> arrWordsSymbol;
	

public:
	Game();
	Game(int, string );

	void randWord();

	void InputLetter(string letter);

	void displayGallows();
};

