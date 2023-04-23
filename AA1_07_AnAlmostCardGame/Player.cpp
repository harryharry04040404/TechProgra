/*#include "Player.h"

class Player
{
	int m_playerId;

	std::queue<Card> m_hand;

	void InsertCard(Card c)
	{
		m_hand.push(c);
	}

	Card GetCard()
	{
		int num;

		return randomCard(num, m_hand);
	}

	Card GetCard(Suit s)
	{
		
	}

	void PrintHand()
	{		
		while (!m_hand.empty())
		{
			m_hand.front();
			m_hand.pop();
		}
			std::cout << std::endl;
	}
};

int randomNumber(int min, int max) 
{
	return rand() % (max - min + 1) + min;
}

Card randomCard(int num, std::queue<Card> cards)
{
	int numOfCards, cardPos;

	numOfCards = num;

	cardPos = randomNumber(1, numOfCards);

	for (int i = 0; i < cardPos; i++)
	{
		cards.front();
	}

	cards.pop();
}
*/