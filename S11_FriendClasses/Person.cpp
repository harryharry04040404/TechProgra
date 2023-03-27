#include "Person.h"

int getSalary(const Person& p) // Sane as declaring m_salary as public, being able to access to it.

{
	return p.m_salary;
}

