#pragma once
#include "Player.h"
class Game
{
	std::queue <Player> m_players;

	int m_numPlayers;

	std::queue<Card> m_deck;

	int m_remainingCards;

	std::queue<Card> m_discarted;

	Game();

	Card GetNewCard();

	void DiscardeCard(Card c);

	void PrintDiscarded();
};