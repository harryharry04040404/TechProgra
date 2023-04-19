#include "Card.h"

class Card
{
	Suit m_suit;
	
	int m_value;

	Card(Suit suit, int value)
	{
		m_suit = suit;

		m_value = value;
 	}

	bool OperatorEqual(Card card1, Card card2)
	{
		bool equal;

		if (card1.m_suit == card2.m_suit && card1.m_value == card2.m_value)
		{
			equal = true;
		}
		else
		{
			equal = false;
		}

		return equal;
	}
};
