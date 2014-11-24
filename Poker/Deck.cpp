#include "Deck.h"


DECK::DECK()
{
	srand(time(NULL));

	cards[0].name	= "2 of Clubs      ";
	cards[1].name	= "3 of Clubs      ";
	cards[2].name	= "4 of Clubs      ";
	cards[3].name	= "5 of Clubs      ";
	cards[4].name	= "6 of Clubs      ";
	cards[5].name	= "7 of Clubs      ";
	cards[6].name	= "8 of Clubs      ";
	cards[7].name	= "9 of Clubs      ";
	cards[8].name	= "10 of Clubs     ";
	cards[9].name	= "Jack of Clubs   ";
	cards[10].name	= "Queen of Clubs  ";
	cards[11].name	= "King of Clubs   ";
	cards[12].name	= "Ace of Clubs    ";
	cards[13].name	= "2 of Spades     ";
	cards[14].name	= "3 of Spades     ";
	cards[15].name	= "4 of Spades     ";
	cards[16].name	= "5 of Spades     ";
	cards[17].name	= "6 of Spades     ";
	cards[18].name	= "7 of Spades     ";
	cards[19].name	= "8 of Spades     ";
	cards[20].name	= "9 of Spades     ";
	cards[21].name	= "10 of Spades    ";
	cards[22].name	= "Jack of Spades  ";
	cards[23].name	= "Queen of Spades ";
	cards[24].name	= "King of Spades  ";
	cards[25].name	= "Ace of Spades   ";
	cards[26].name	= "2 of Hearts     ";
	cards[27].name	= "3 of Hearts     ";
	cards[28].name	= "4 of Hearts     ";
	cards[29].name	= "5 of Hearts     ";
	cards[30].name	= "6 of Hearts     ";
	cards[31].name	= "7 of Hearts     ";
	cards[32].name	= "8 of Hearts     ";
	cards[33].name	= "9 of Hearts     ";
	cards[34].name	= "10 of Hearts    ";
	cards[35].name	= "Jack of Hearts  ";
	cards[36].name	= "Queen of Hearts ";
	cards[37].name	= "King of Hearts  ";
	cards[38].name	= "Ace of Hearts   ";
	cards[39].name	= "2 of Dimonds    ";
	cards[40].name	= "3 of Dimonds    ";
	cards[41].name	= "4 of Dimonds    ";
	cards[42].name	= "5 of Dimonds    ";
	cards[43].name	= "6 of Dimonds    ";
	cards[44].name	= "7 of Dimonds    ";
	cards[45].name	= "8 of Dimonds    ";
	cards[46].name	= "9 of Dimonds    ";
	cards[47].name	= "10 of Dimonds   ";
	cards[48].name	= "Jack of Dimonds ";
	cards[49].name	= "Queen of Dimonds";
	cards[50].name	= "King of Dimonds ";
	cards[51].name	= "Ace of Dimonds  ";

	for (int i = 0; i < 52; i++)
	{
		cards[i].number = (i % 13) + 1;
		cards[i].suit = (i / 13) + 1;
	}
};
void DECK::Shuffle()
{
	for (int i = 0; i < 52; i++)
	{
		int r = rand() % 52;
		CARD token = cards[i];
		cards[i] = cards[r];
		cards[r] = token;
	}
}
void DECK::Print()
{
	for (int i = 0; i < count; i++)
	{
		cout << "[" << cards[i].number << "]";
		cout << "[" << cards[i].suit << "]";
		cout << "\t" <<  cards[i].name << endl;

	}

}