#pragma once
#include <iostream>

struct Car
{
	//Atributes
	std::string m_model;
	bool m_isElectric;
	int m_color;

	//Methods
	void startEngine()
	{
		if (!m_isElectric)
		{
			std::cout << "BRUMMMMMMM!!!!" << std::endl;
		}
	}

	//Getter
	const std::string getModel()
	{
		return m_model;
	}

	//Setter
	void setModel(const std::string& model)
	{
		m_model = model;
	}

	void setIsElectric(bool isElectric)
	{
		m_isElectric = isElectric;
	}
};

