#pragma once
#include "BaseTask.h"

/// <summary>
/// Задача 4
/// </summary>
class Task4 : public BaseTask
{
public:

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;

private:

	/// <summary>
	/// Первое действительное число в виде строки
	/// </summary>
	std::string strNumber1;

	/// <summary>
	/// Второе дейтсвительное число в виде строки
	/// </summary>
	std::string strNumber2;

	/// <summary>
	/// Возвращает слово из строки по соответствующему номеру
	/// </summary>
	/// <param name="str"> Строка </param>
	/// <param name="number"> Номер слова в строке </param>	
	std::string StringWord(std::string str, int number);

	/// <summary>
	/// Преобразует строку в вещественное число
	/// </summary>
	/// <param name="strNumber"> Вещественное число в виде строки </param>
	/// <param name="number"> Вещественное число </param>
	bool ToDouble(std::string strNumber, double& number);

	/// <summary>
	/// Удаляет нули стоящие перед действительным числом
	/// </summary>
	/// <param name="str"> Число в виде строки </param>	
	std::string RemoveZeros(std::string str);

	/// <summary>
	/// Определяет количество слов в тексте
	/// </summary>
	/// <param name="str"> Текст </param>	
	int WordCount(std::string str);
};
