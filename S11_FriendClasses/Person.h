#include <vector>
#include <iostream>

class Person
{
private:
	int m_id; 
	int m_age; 
	int m_salary;

	friend int getSalary(const Person& p); // NOT A MEMBER, NOT A METHOD, BUT A FUNCTION

public:

	Person(int id, int age, int salary) :
		m_id(id),
		m_age(age),
		m_salary(1000)
	{
	}

	int GetId() const
	{
		return m_id;
	}
	int GetAge() const
	{
		return m_age;
	}
	int GetSalary() const
	{
		return m_salary;
	}
	void SetAge(int age)
	{
		m_age = age;
	}

	friend class Bank;
};

int getSalary(const Person& p); // Sane as declaring m_salary as public, being able to access to it.

class Bank
{
private:
	std::vector<Person> m_clients;

public:
	void AddClient(const Person& person)
	{
		m_clients.push_back(person);
	}

	float GetClientSalary(int id) const
	{
		float salary = 0.0f;
		bool found = false;


		for (int i = 0; i < m_clients.size() && !found; i++)
		{
			if (m_clients[i].GetId() == id)
			{
				found = true;

				salary = m_clients[i].m_salary;
			}
		}
		return salary;
	}
};