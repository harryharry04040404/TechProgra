#include "Game.h"

class Game
{
	std::vector <Player> m_players;

	int m_numPlayers;

	std::queue<Card> m_deck;

	int m_remainingCards;

	std::queue<Card> m_discarted;

	Game()
	{
		m_players = {};

		m_numPlayers = 0;

		m_deck = {};

		m_remainingCards = 48;

		m_discarted = {};
	}

	Card GetNewCard()
	{
		
	}

	void DiscardeCard(Card c)
	{
		m_discarted.push(c);
	}
	
	void PrintDiscarded()
	{
		
	}
};