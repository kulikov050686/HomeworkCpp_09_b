#pragma once
#include <iostream>
#include <string>

/// <summary>
/// Задача 2
/// </summary>
class Task2 : public ITask 
{
public:
	
	/// <summary>
	/// Конструктор
	/// </summary>
	Task2() = default;

	/// <summary>
	/// Запустить
	/// </summary>
	void Run() override;

	/// <summary>
	/// Деструктор
	/// </summary>
	virtual ~Task2() = default;

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

	/// <summary>
	/// Количество символов в строке
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="chr"> Символ </param>	
	int NumberOfSymbols(const std::string str, const char chr);
};
