#include "MenuController.h"
#include "pch.h"

MenuController::MenuController(std::vector<std::string> itemsMenu, std::function<void(std::string)> funcPrint)
{
    _sizeMenu = itemsMenu.size();
    _funcPrint = std::move(funcPrint);
	_menu = new Menu(itemsMenu);
}

int MenuController::SelectedMenuItem(const std::string text)
{
    int selection = 0;
    PrintMenu(selection, text);

    do
    {
        if (_kbhit())
        {
            switch (_getch())
            {
            case 72:
                //Up
                if (selection > 0) selection--;
                break;
            case 80:
                //Down
                if (selection < _sizeMenu - 1) selection++;
                break;            
            }
        }       
        
        PrintMenu(selection, text);
    }
    while (_getch() != 13);

    system("cls");

    return selection;
}

void MenuController::PrintMenu(int selection, const std::string text)
{
	system("cls");
        
    _funcPrint(text);

    for (int i = 0; i < _sizeMenu; i++)
    {
        if (i == selection)
        {
            _funcPrint("->" + _menu->GetItemMenu(i));
        }
        else
        {
            _funcPrint(_menu->GetItemMenu(i));
        }
    }
}

MenuController::~MenuController()
{
	if (_menu != nullptr)
	{
		delete _menu;
	}
}
