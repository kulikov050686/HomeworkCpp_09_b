#include "pch.h"
#include "Task3.h"

void Task3::Run()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	std::string str;
	std::cout << "Введите IP-адрес: ";
	std::getline(std::cin, str);
	str = RemoveSpaces(str);

	if((7 <= str.length() && str.length() <= 15) &&
	   (NumberOfSymbols(str, '.') == 3) && 
	   !RepeatingInRow(str, '.') && 
	   (str[0] != '.'))
	{
		std::string temp = "";
		bool key = true;
		int k = 0;

		for (size_t i = 0; i < str.length() && key; i++)
		{
			if (str[i] != '.')
			{
				temp += str[i];
				key = !(temp.length() > 3);				
			}
			else
			{
				key = !(temp[0] == '0' && temp.length() > 1);

				if (key)
				{					
					key = Convert::ToInt(temp, _numbers[k]);
					key = key && !(_numbers[k] > 255);
				}

				temp = "";
				k++;
			}
		}

		if (key)
		{
			std::cout << "Yes!" << std::endl;
		}
		else
		{
			std::cout << "Ошибка ввода данных!" << std::endl;
		}
	}
	else
	{
		std::cout << "Ошибка ввода данных!" << std::endl;
	}
}

bool Task3::RepeatingInRow(std::string str, char chr)
{
	for (size_t i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == chr && str[i + 1] == chr) return true;
	}

	return false;
}

std::string Task3::RemoveSpaces(std::string str)
{
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

int Task3::NumberOfSymbols(const std::string str, const char chr)
{
	int k = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == chr) k++;
	}

	return k;
}
