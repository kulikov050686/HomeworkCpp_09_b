#include "Menu.h"
#include "pch.h"

Menu::Menu(std::vector<std::string> nameItemsMenu)
{
	_sizeMenu = nameItemsMenu.size();

	if (_sizeMenu > 0)
	{
		_itemsName = new std::string[_sizeMenu];

		for (int i = 0; i < _sizeMenu; i++)
		{
			_itemsName[i] = nameItemsMenu[i];
		}
	}	
}

std::string Menu::GetItemMenu(int menuItemNumber)
{
	if (0 <= menuItemNumber && menuItemNumber < _sizeMenu && _itemsName != nullptr)
	{
		return _itemsName[menuItemNumber];
	}

	return "Error!";
}

Menu::~Menu()
{
	delete[] _itemsName;	
}
