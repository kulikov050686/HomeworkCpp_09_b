#include <iostream>
#include <memory>
#include "HomeWork.h"
#include "../MenuLib/MenuController.h"
#include "../TasksLib/TasksLocator.h"

/// <summary>
/// Функция создания меню
/// </summary>
std::shared_ptr<IMenuController> CreateMenu()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	std::vector<std::string> item = { "Task 1",
									  "Task 2",
									  "Task 3",
									  "Task 4",
									  "Task 5",									  
									  "Exit" };

	return std::make_shared<MenuController>(std::make_shared<Menu>(item), [](std::string text)
		{
			std::cout << text << std::endl;
		});
}

/// <summary>
/// Создание задач
/// </summary>
std::shared_ptr<TasksLocator> CreateTasks()
{
	return std::make_shared<TasksLocator>();
}

int main()
{
	HomeWork* homework = new HomeWork();
	homework->Run(CreateMenu(), CreateTasks());
}
