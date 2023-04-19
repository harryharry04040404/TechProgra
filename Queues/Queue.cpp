#include "Queue.h"
#include <iostream>
class Queue
{
private:
	struct Node
	{
		int value;
		Node* next;
	};

	Node* m_first;
	Node* m_last;
	size_t m_size;

public:

	Queue()
	{
		m_first = nullptr;
		m_last = nullptr;
		m_size = 0;
	}

	void Push(int value)
	{
		//Create Node
		Node* node = new Node();
		node->value = value;

		if (m_first == nullptr)
		{
			m_first = node;
			m_last = node;
		}
		else
		{
			m_last->next = node;
			m_last = m_last->next;
		}

		++m_size;
	}

	int Pop()
	{
		if (m_first == nullptr || m_size == 0)
		{
			return -1;
		}

		Node* nodeToRemove = m_first;
		int  valueRemoved = nodeToRemove->value;

		m_first = m_first->next;

		delete nodeToRemove;

		return valueRemoved;
	}	

	int Front()
	{
		if (m_first == nullptr)
		{
			return  -1;
		}
		return m_first->value;
	}

	int Back()
	{
		if (m_last == nullptr)
		{
			return -1;
		}
		return m_last->value;
	}

	void Print() const
	{
		Node* it = m_first;
		while (it != nullptr)
		{
			it = it->next;
			std::cout << it->value;
		}
	}

	~Queue()
	{

	}
};

