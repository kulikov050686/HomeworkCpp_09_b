#include "HomeWork.h"

void HomeWork::Run(std::shared_ptr<IMenuController> menuController,
				   std::shared_ptr<TasksLocator> taskLocator)
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	bool exit = false;
	std::string text = "Выберите пункт меню:";

	while (!exit)
	{
		switch (menuController->SelectedMenuItem(text))
		{
		case 0:
		{
			taskLocator->GetTask1()->Run();
			break;
		}			
		case 1:
		{
			taskLocator->GetTask2()->Run();
			break;
		}		
		case 2:
		{
			taskLocator->GetTask3()->Run();
			break;
		}			
		case 3:
		{
			taskLocator->GetTask4()->Run();
			break;
		}		
		case 4:
		{
			taskLocator->GetTask5()->Run();
			break;
		}		
		case 5:
			exit = true;
			break;
		}

		_getch();
	}
}
