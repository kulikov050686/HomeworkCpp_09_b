#pragma once
#include <memory>
#include "ITask.h"
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"

/// <summary>
/// Локатор задач
/// </summary>
class TasksLocator
{
public:

	/// <summary>
	/// Конструктор
	/// </summary>
	TasksLocator() = default;

	/// <summary>
	/// Задача 1
	/// </summary>	
	std::shared_ptr<ITask> GetTask1() { return std::make_shared<Task1>(); }

	/// <summary>
	/// Задача 2
	/// </summary>	
	std::shared_ptr<ITask> GetTask2() { return std::make_shared<Task2>(); }

	/// <summary>
	/// Задача 3
	/// </summary>	
	std::shared_ptr<ITask> GetTask3() { return std::make_shared<Task3>(); }

	/// <summary>
	/// Задача 4
	/// </summary>	
	std::shared_ptr<ITask> GetTask4() { return std::make_shared<Task4>(); }

	/// <summary>
	/// Задача 5
	/// </summary>	
	std::shared_ptr<ITask> GetTask5() { return std::make_shared<Task5>(); }

	/// <summary>
	/// Деструктор
	/// </summary>
	virtual ~TasksLocator() = default;

private:

	/// <summary>
	/// Запрет присваивания
	/// </summary>	
	TasksLocator& operator = (const TasksLocator&) = delete;

	/// <summary>
	/// Запрет копирования
	/// </summary>	
	TasksLocator(const TasksLocator&) = delete;
};
