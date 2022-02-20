#pragma once
#include <iostream>
#include <string>
#include <array>
#include "ITask.h"
#include "../ConvertLib/Convert.h"

/// <summary>
/// Задача 3
/// </summary>
class Task3 : public ITask
{
public:

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;

private:

	/// <summary>
	/// Массив чисел
	/// </summary>
	std::array<int, 4> _numbers;

	/// <summary>
	/// Проверяет есть ли в строке подряд повторяющиеся символы
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="chr"> Повторяющийся символ </param>	
	bool RepeatingInRow(std::string str, char chr);

	/// <summary>
	/// Удаляет пробелы в строке 
	/// </summary>
	/// <param name="str"> Строка </param>	
	std::string RemoveSpaces(std::string str);

	/// <summary>
	/// Количество символов в строке
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="str"> Символ </param>	
	int NumberOfSymbols(const std::string str, const char chr);
};
