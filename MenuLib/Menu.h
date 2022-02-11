#pragma once
#include <string>
#include <vector>

/// <summary>
/// Класс меню
/// </summary>
class Menu
{
private:

	/// <summary>
	/// Количество пунктов меню
	/// </summary>
	int _sizeMenu = 0;

	/// <summary>
	/// Название пунктов меню
	/// </summary>
	std::string* _itemsName = nullptr;

	/// <summary>
	/// Запрет копировария
	/// </summary>	
	Menu(const Menu& object) = delete;

	/// <summary>
	/// Запрет присваивания
	/// </summary>	
	Menu& operator = (const Menu&) = delete;

public:

	/// <summary>
	/// Конструктор меню
	/// </summary>
	/// <param name="nameItemsMenu"> Список названий пунктов меню </param>
	Menu(std::vector<std::string> nameItemsMenu);
	
	/// <summary>
	/// Получить название пункта меню по номеру
	/// </summary>
	/// <param name="menuItemNumber"> Номер пункта меню </param>	
	std::string GetItemMenu(int menuItemNumber);
		
	/// <summary>
	/// Деструктор
	/// </summary>
	~Menu();
};
