#pragma once
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
	
	Queue();

	void Push(int value);
	int Pop();
	int Front();
	int Back();
	void Print() const;

	~Queue();
};

