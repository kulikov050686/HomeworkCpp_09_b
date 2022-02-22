#pragma once
#include <iostream>
#include <string>
#include "ITask.h"
#include "ComparisonResultEnum.h"

/// <summary>
/// Задача 4
/// </summary>
class Task4 : public ITask
{
public:

	/// <summary>
	/// Конструктор
	/// </summary>
	Task4() = default;

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;

	/// <summary>
	/// Деструктор
	/// </summary>
	virtual ~Task4() = default;

private:

	/// <summary>
	/// Знак числа 1
	/// </summary>
	bool _minusSign1 = false;

	/// <summary>
	/// Знак числа 2
	/// </summary>
	bool _minusSign2 = false;

	/// <summary>
	/// Сравнить два длинных действительных числа
	/// </summary>
	/// <param name="number1"> Первое число </param>
	/// <param name="number2"> Второе число </param>	
	ComparisonResultEnum ComparisonOfRealNumbers(std::string number1, std::string number2);

	/// <summary>
	/// Удаляет все пробелы в строке
	/// </summary>	
	std::string RemoveSpaces(std::string str);

	/// <summary>
	/// Удалить нули перед числом
	/// </summary>
	/// <param name="str"> Число </param>	
	std::string RemoveZerosBeforeNumber(std::string str);

	/// <summary>
	/// Удалить нули после числа
	/// </summary>
	/// <param name="str"> Число </param>	
	std::string RemoveZerosAfterNumber(std::string str);

	/// <summary>
	/// Проверяет является ли символ цифрой
	/// </summary>	
	bool Numeral(char chr);

	/// <summary>
	/// Количество символов в строке
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="str"> Символ </param>	
	int NumberOfSymbols(const std::string str, const char chr);

	/// <summary>
	/// Правильность строки
	/// </summary>
	/// <param name="str"> Строка </param>	
	bool StringCorrectness(const std::string str);

	/// <summary>
	/// Корректность данных
	/// </summary>
	/// <param name="str"> Строка с данными </param>	
	bool DataCorrectness(std::string& str);

	/// <summary>
	/// Целая часть числа
	/// </summary>
	/// <param name="number"> Число </param>	
	std::string IntegerPartOfNumber(std::string number);

	/// <summary>
	/// Дробная часть числа
	/// </summary>
	/// <param name="number"> Число </param>	
	std::string FractionalPartOfNumber(std::string number);

	/// <summary>
	/// Сравнение целых частей
	/// </summary>
	/// <param name="strIntegerPart1"> Целая часть первого числа </param>
	/// <param name="strIntegerPart2"> Целая часть второго числа </param>	
	ComparisonResultEnum ComparisonOfWholeParts(const std::string strIntegerPart1, const std::string strIntegerPart2);

	/// <summary>
	/// Сравнение дробных частей
	/// </summary>
	/// <param name="strFractionalPart1"> Дробная часть первого числа </param>
	/// <param name="strFractionalPart2"> Дробная часть второго числа </param>
	/// <returns></returns>
	ComparisonResultEnum ComparisonOfFractionalParts(const std::string strFractionalPart1, const std::string strFractionalPart2);
};
