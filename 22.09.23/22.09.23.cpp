#include <iostream>
#include <ctime>
#include "Game.h"

using namespace std;

int main()
{
	srand(time(NULL));

	int start;
	cout << "You want to start the game?(1-yes; 2-no)" << endl;
	cin >> start;

	if (start == 1) {
		cout << "";
		Game* game = new Game();

		cout << "the word needs to be guessed: " << endl;
		cout << " ";
		game->randWord();
		cout << endl << endl << endl;
	}
	else {
		return 0;
	}

	int change;
	cout << "You want change the word?(1-yes; 2-no)" << endl;
	cin >> change;

	int stop = 0;

	if (change == 1) {
		
		while (stop != 1) {
			Game* game = new Game();

			cout << "the word needs to be guessed: " << endl;
			cout << " ";
			game->randWord();
			cout << endl << endl << endl;

			cout << "This word suits you?(1-yes; 2-no)" << endl;
			cin >> stop;
			system("cls");
		}
	}
	
	
}

