#include <iostream>
#include <stdlib.h>
#include "Deck.h"

using namespace std;

bool gameOver = false;
DECK pokerDeck;
CARD player1[2];
CARD player2[2];
CARD game[6];
CARD burn[4];
int player1Bet = 0;
int player2Bet = 0;
int bet = 0;



void PrintHeader();
void Deal();

void main()
{
	srand(time(NULL));
	while (!gameOver)
	{
		system("CLS");
		PrintHeader();
		pokerDeck.Shuffle();
		pokerDeck.Shuffle();
		Deal();


		////////////////////////////////////////////////////////////////////////////////
		// Round 1
		cout << "Player 1 Has: " << player1[0].name << " - " << player1[1].name << endl;
		cout << "Bet: ";
		cin >> player1Bet;
		cout << "Player 2 Has: " << player2[0].name << " - " << player2[1].name << endl;
		player2Bet = rand() % 20;
		cout << "Bet: " << player2Bet << endl;
		////////////////////////////////////////////////////////////////////////////////

		cout << endl;
		
		////////////////////////////////////////////////////////////////////////////////
		// Round 2
		cout << "First 3 Cards are" << endl;
		cout << game[0].name << game[1].name << game[2].name << endl;

		cout << endl;

		cout << "Player 1 Bet: ";
		cin >> bet;
		player1Bet += bet;
		
		player2Bet += rand() % 20;
		cout << "Player 2 Bet: " << player2Bet << endl;
		////////////////////////////////////////////////////////////////////////////////

		cout << endl;

		////////////////////////////////////////////////////////////////////////////////
		// Round 3
		cout << "The Turn card is" << endl;
		cout << game[0].name << game[1].name << game[2].name << game[3].name << endl;

		cout << endl;

		cout << "Player 1 Bet: ";
		cin >> bet;
		player1Bet += bet;

		player2Bet += rand() % 20;
		cout << "Player 2 Bet: " << player2Bet << endl;
		////////////////////////////////////////////////////////////////////////////////

		cout << endl;
		
		////////////////////////////////////////////////////////////////////////////////
		// Round 4
		cout << "The River is " << endl;
		cout << game[0].name << game[1].name << game[2].name << game[3].name << game[4].name << endl;

		cout << endl;

		cout << "Player 1 Bet: ";
		cin >> bet;
		player1Bet += bet;
		player2Bet += rand() % 20;
		cout << "Player 2 Bet: " << player2Bet << endl;
		////////////////////////////////////////////////////////////////////////////////

		cout << endl;
		////////////////////////////////////////////////////////////////////////////////
		// END
		cout << "       >>> AGAIN <<<      " << endl;
		cout << " 'y' for YES || 'n' for NO" << endl;
		char r;
		cin >> r;

		if (r == 'y')
			gameOver = false;
		else if (r == 'n')
			gameOver = true;
		else
		{
			for (int i = 0; i < 1000; i++)
				cout << "You're an Idiot \t";

			gameOver = true;
		}

	}

}

void PrintHeader()
{
	cout << "==============================" << endl;
	cout << "||| Project 1 - Poker Game |||" << endl;
	cout << "||| Joshua 'Hypo' Klarich  |||" << endl;
	cout << "||| SGPG 440 - AI          |||" << endl;
	cout << "==============================" << endl << endl;

}

void Deal()
{
	player1[0] = pokerDeck.cards[0];
	player2[0] = pokerDeck.cards[1];
	player1[1] = pokerDeck.cards[2];
	player2[1] = pokerDeck.cards[3];
	burn[0] = pokerDeck.cards[4];
	game[0] = pokerDeck.cards[5];
	game[1] = pokerDeck.cards[6];
	game[2] = pokerDeck.cards[7];
	burn[1] = pokerDeck.cards[8];
	game[3] = pokerDeck.cards[9];
	burn[3] = pokerDeck.cards[10];
	game[4] = pokerDeck.cards[11];

}


