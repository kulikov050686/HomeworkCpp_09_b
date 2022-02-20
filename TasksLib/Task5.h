#pragma once
#include <iostream>
#include <string>
#include "ITask.h"

/// <summary>
/// Задача 5
/// </summary>
class Task5 : public ITask
{
public:

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;

private:

	/// <summary>
	/// Проверка корректности ввода строки
	/// </summary>
	/// <param name="str"> Строка для проверки </param>	
	bool CorrectInput(std::string str);

	/// <summary>
	/// Проверка символа
	/// </summary>
	/// <param name="chr"> Символ </param>	
	bool AllowedSymbol(char chr);

	/// <summary>
	/// Проверяет победу
	/// </summary>	
	bool Victory(const std::string* str, const char chr);

	/// <summary>
	/// Удаляет пробелы в строке 
	/// </summary>
	/// <param name="str"> Строка </param>	
	std::string RemoveSpaces(std::string str);

	/// <summary>
	/// Количество символов в строке
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="chr"> Символ </param>	
	int NumberOfSymbols(const std::string str, const char chr);
};

