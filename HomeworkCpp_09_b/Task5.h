#pragma once
#include "BaseTask.h"

/// <summary>
/// Задача 5
/// </summary>
class Task5 : public BaseTask
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
};

