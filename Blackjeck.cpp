#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main() {

	int dealerCard, dcard_1, dcard_2, dRanCard, dcardTotal;
	int playerCard, pcard_1, pcard_2, pRanCard, pcardTotal;
	char playerQuestion = 'y';
	char question = 'y';

	bool playing;

	srand(time(0));


	while(playing)
	{
		cout << "Welcome to the Game of BlackJack" << endl;
		//player get 2 cards


		pcard_1 = (rand() % 10) + 1;
		pcard_2 = (rand() % 10) + 1;
		pcardTotal = pcard_1 + pcard_2;
		cout << "Your first card number is " << pcard_1 << endl;
		cout << "Your second card number is " << pcard_2 << endl;
		cout << "Your total number is " << pcardTotal << endl << endl;

		//dealer hand out 2 cards

		dcard_1 = (rand() % 10) + 1;
		dcard_2 = (rand() % 10) + 1;
		dcardTotal = dcard_1 + dcard_2;

		cout << "Dealer first card number is " << dcard_1 << endl;

		//ask player is he want more card?

		cout << "Do you want another card? (y/n)" << endl;
		

		cin >> playerQuestion;
		while (playerQuestion == 'y')
		{
			pRanCard = (rand() % 10) + 1;
			pcardTotal = pcardTotal + pRanCard;

			cout << "Your new card number is " << pRanCard << endl;
			cout << "Your total number is " << pcardTotal << endl << endl;

			

			if (pcardTotal >= 22)
			{
				playing = false;
				cout << "you lose the game!!" << endl;
			} 
			else
			{
				cout << "Do you want another card? (y/n)" << endl;
				cin >> playerQuestion;
				if (playerQuestion != 'y')
				{
					playerQuestion = false;
				}
			}

			
		}

		cout << "Dealer second card number is " << dcard_2 << endl;
		cout << "Dealer total number is " << dcardTotal << endl << endl;
		

		
		while (dcardTotal <= 16)
		{
			dRanCard = (rand() % 10) + 1;
			dcardTotal = dcardTotal + dRanCard;
			cout << "Dealer new card number is " << dRanCard << endl;
			
			cout << "Dealer total number is " << dcardTotal << endl << endl;

			if (dcardTotal > 21) 
			{
				cout << "you won the game!!" << endl;
			}
		}

		if (dcardTotal > pcardTotal)
		{
			cout << "you lose the game!!" << endl;
		}
		else
		{
			cout << "you won the game!!" << endl;
		}

		

		cout << "Would you like to play again? (y/n)" << endl;
		cin >> question;
		if (question == 'y')
		{
			playing = true;

			dealerCard = 0;
			playerCard = 0;


		} 
		else
		{
			playing = false;
		}

	}


	

	return 0;
}

