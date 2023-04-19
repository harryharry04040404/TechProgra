#pragma once
#include "Player.h"
class Game
{
private:
	std::queue <Player> m_players;

	int m_numPlayers;

	std::queue<Card> m_deck;

	int m_remainingCards;

	std::stack<Card> m_discarted;

public:
	Game();

	Card GetNewCard();

	void DiscardeCard(Card c);

	void PrintDiscarded();
};