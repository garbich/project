#include "Game.h"

Game::Game() {
	letter = ' ';
}

Game::Game(int, string) {
	this->randNum = randNum;
	this->letter = letter;
}

void Game::randWord() {
	

	if (randNum == 1) {
		arrWordsSymbol.push_back("G");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("N");

		// Word - "GREEN";

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

	}
	else if (randNum == 2) {
		arrWordsSymbol.push_back("F");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("K");

		// Word - "FABRIC";

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}
		
	}
	else if (randNum == 3) {
		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		// Word - "TABLE"

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}
	}
	else if (randNum == 4) {
		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		// Word - "TELEPHONE"

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}
	}
	else if (randNum == 5) {
		cout << "";
	}
}

void Game::InputLetter(string letter) {

	for (int i = 0; i > arrWordsSymbol.size(); i++) {

		if (letter == arrWordsSymbol[i]) {
			cout << "Letter is in the letter!" << endl;
			arrWordsSymbol[i] = letter;

		}
		else {
			cout << "There is no such letter in the word!" << endl;

		}
	}
}

void Game::displayGallows() {


}