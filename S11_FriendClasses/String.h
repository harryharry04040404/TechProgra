#include <iostream>

class String
{
private:
	char* m_text;
	size_t m_sizeOfText;

public:
	String(const char* ch)
	{
		m_sizeOfText = strlen(ch) + 1;
		m_text = new char[m_sizeOfText];

		strcpy_s(m_text, m_sizeOfText, ch);
	}

	~String()
	{
		delete[] m_text;
	}
};

void PrintMarc()
{
	String marc("marc");
}