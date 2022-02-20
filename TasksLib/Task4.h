#pragma once
#include <iostream>
#include <string>
#include "ITask.h"

/// <summary>
/// Задача 4
/// </summary>
class Task4 : public ITask
{
public:

	/// <summary>
	/// Запуск
	/// </summary>
	void Run() override;
};
