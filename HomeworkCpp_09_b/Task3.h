#pragma once
#include "BaseTask.h"
#include <array>
#include "../ConvertLib/Convert.h"

/// <summary>
/// Задача 3
/// </summary>
class Task3 : public BaseTask
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
};
