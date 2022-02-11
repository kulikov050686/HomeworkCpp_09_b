#pragma once
#include <iostream>
#include <functional>
#include <vector>
#include <conio.h>
#include <string>
#include "Menu.h"

/// <summary>
/// Класс контроллера меню
/// </summary>
class MenuController
{
private:

	/// <summary>
	/// Меню приложения
	/// </summary>
	Menu* _menu = nullptr;
		
	/// <summary>
	/// Количество пунктов меню
	/// </summary>
	int _sizeMenu = 0;
		
	/// <summary>
	/// Функция отрисовки текста
	/// </summary>
	std::function<void(std::string)> _funcPrint;
		
	/// <summary>
	/// Печать пунктов меню
	/// </summary>
	/// <param name="selection"> Номер пункта меню </param>
	/// <param name="text"> Текст заголовка </param>
	void PrintMenu(int selection, const std::string text);

	/// <summary>
	/// Запрет присваивания
	/// </summary>	
	MenuController& operator = (const MenuController&) = delete;

	/// <summary>
	/// Запрет копирования
	/// </summary>	
	MenuController(const MenuController&) = delete;

public:

	/// <summary>
	/// Создание нового контроллера меню
	/// </summary>
	/// <param name="itemsMenu"> Список названий пунктов меню </param>
	/// <param name="funcPrint"> Функция отрисовки текста </param>
	MenuController(std::vector<std::string> itemsMenu, std::function<void(std::string)> funcPrint);
	
	/// <summary>
	/// Выбор пункта меню
	/// </summary>
	/// <param name="text"> Текст заголовка </param>	
	int SelectedMenuItem(const std::string text);

	/// <summary>
	/// Деструктор
	/// </summary>
	~MenuController();
};
