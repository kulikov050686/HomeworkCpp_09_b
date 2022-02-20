#pragma once
#include <iostream>
#include "ITask.h"

/// <summary>
/// Задача 1
/// </summary>
class Task1 : public ITask
{
public:

	/// <summary>
	/// Конструктор
	/// </summary>
	Task1() = default;

	/// <summary>
	/// Запустить
	/// </summary>
	void Run() override;

	/// <summary>
	/// Деструктор
	/// </summary>
	virtual ~Task1() = default;

private:

	/// <summary>
	/// Функция шифратор
	/// </summary>
	/// <param name="text"> Текст </param>
	/// <param name="position"> Позиция </param>	
	std::string EncryptCaesar(std::string text, size_t position);

	/// <summary>
	/// Функция дешифратор
	/// </summary>
	/// <param name="text"> Текст </param>	
	/// <param name="position"> Позиция </param>
	std::string DecryptCaesar(std::string text, size_t position);
};
