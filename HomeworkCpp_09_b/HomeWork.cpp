#include "HomeWork.h"

void HomeWork::Run()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	bool exit = false;
	std::string text = "Выберите пункт меню";

	std::vector<std::string> item = { "Задача 1",
									  "Задача 2",
									  "Задача 3",
									  "Задача 4",
									  "Задача 5",
									  "Выход" };


	MenuController menu(item, [](std::string text)
	{
			std::cout << text << std::endl;
	});

	while (!exit)
	{
		switch (menu.SelectedMenuItem(text))
		{
		case 0:
		{
			Task1* task = new Task1();
			task->Run();
			delete task;
			break;
		}			
		case 1:
		{
			Task2* task = new Task2();
			task->Run();
			delete task;
			break;
		}		
		case 2:
		{
			Task3* task = new Task3();
			task->Run();
			delete task;
			break;
		}			
		case 3:
		{
			Task4* task = new Task4();
			task->Run();
			delete task;
			break;
		}		
		case 4:
		{
			Task5* task = new Task5();
			task->Run();
			delete task;
			break;
		}		
		case 5:
			exit = true;
			break;
		}

		_getch();
	}
}
