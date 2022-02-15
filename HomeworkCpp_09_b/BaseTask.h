#pragma once
#include <iostream>
#include <string>

/// <summary>
/// Базовы класс задача
/// </summary>
class BaseTask
{
protected:

	/// <summary>
	/// Конструктор
	/// </summary>
	BaseTask() = default;

	/// <summary>
	/// Запуск
	/// </summary>
	virtual void Run() = 0;

	/// <summary>
	/// Удаляет пробелы в строке 
	/// </summary>
	/// <param name="str"> Строка </param>	
	std::string RemoveSpaces(std::string str);

	/// <summary>
	/// Проверяет является ли символ цифрой
	/// </summary>
	/// <param name="chr"> Символ </param>	
	bool Numeral(char chr);

	/// <summary>
	/// Количечество символов в строке
	/// </summary>
	/// <param name="str"> Строка </param>	
	int NumberOfSymbols(std::string str, const char chr);

private:

	/// <summary>
	/// Запрет присваивания
	/// </summary>	
	BaseTask& operator = (const BaseTask&) = delete;

	/// <summary>
	/// Запрет копирования
	/// </summary>	
	BaseTask(const BaseTask&) = delete;
};
