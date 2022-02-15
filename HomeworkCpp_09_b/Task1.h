#pragma once
#include "BaseTask.h"

/// <summary>
/// Задача 1
/// </summary>
class Task1 : public BaseTask
{
public:

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;

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

