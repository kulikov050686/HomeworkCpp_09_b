#pragma once
#include <iostream>
#include <string>
#include "BaseTask.h"

/// <summary>
/// Задача 2
/// </summary>
class Task2 : public BaseTask
{
public:

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;

private:

	/// <summary>
	/// Проверяет есть ли в строке подряд повторяющиеся символы
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="chr"> Повторяющийся символ </param>	
	bool RepeatingInRow(std::string str, char chr);

	/// <summary>
	/// Проверяет является ли символ допустимым для первой части адреса
	/// </summary>
	/// <param name="chr"> Символ </param>	
	bool ValidCharacterFirstPart(char chr);

	/// <summary>
	/// Проверяет является ли символ допустимым для второй части адреса
	/// </summary>
	/// <param name="chr"> Символ </param>	
	bool ValidCharacterSecondPart(char chr);
};

