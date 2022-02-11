#pragma once
#include <iostream>
#include <random>
#include <vector>
#include "Tasks.h"
#include "../MenuLib/MenuController.h"

class HomeWork
{
public:

	HomeWork() = default;

	/// <summary>
	/// Запуск
	/// </summary>
	void Run();

private:

	/// <summary>
	/// Запрет присваивания
	/// </summary>	
	HomeWork& operator = (const HomeWork&) = delete;

	/// <summary>
	/// Запрет копирования
	/// </summary>	
	HomeWork(const HomeWork&) = delete;
};

