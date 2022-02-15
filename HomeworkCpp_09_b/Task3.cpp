#include "Task3.h"

void Task3::Run()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	std::string str;
	std::cout << "Введите IP-адрес: ";
	std::getline(std::cin, str);
	str = RemoveSpaces(str);

	if((7 <= str.size() && str.size() <= 15) &
	   (NumberOfSymbols(str, '.') == 3) & 
	   !RepeatingInRow(str, '.') & 
	   (str[0] != '.'))
	{
		std::string temp = "";
		bool key = true;
		int k = 0;

		for (size_t i = 0; i < str.size() && key; i++)
		{
			if (str[i] != '.')
			{
				temp += str[i];
				key = !(temp.size() > 3);				
			}
			else
			{
				key = !(temp[0] == '0' && temp.size() > 1);

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
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == chr && str[i + 1] == chr) return true;
	}

	return false;
}
