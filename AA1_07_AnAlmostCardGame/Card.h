#pragma once
enum Suit
{
	SPADES,
	COINS,
	CUPS,
	CLUBS
};

class Card
{
	Suit m_suit;

	int m_value;

	Card();

	bool OperatorEqual(Card card1, Card card2);
};

