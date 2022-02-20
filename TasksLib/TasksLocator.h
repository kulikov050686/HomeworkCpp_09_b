#pragma once
#include <memory>
#include "ITask.h"
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"

/// <summary>
/// ������� �����
/// </summary>
class TasksLocator
{
public:

	/// <summary>
	/// �����������
	/// </summary>
	TasksLocator() = default;

	/// <summary>
	/// ������ 1
	/// </summary>	
	std::shared_ptr<ITask> GetTask1() { return std::make_shared<Task1>(); }

	/// <summary>
	/// ������ 2
	/// </summary>	
	std::shared_ptr<ITask> GetTask2() { return std::make_shared<Task2>(); }

	/// <summary>
	/// ������ 3
	/// </summary>	
	std::shared_ptr<ITask> GetTask3() { return std::make_shared<Task3>(); }

	/// <summary>
	/// ������ 4
	/// </summary>	
	std::shared_ptr<ITask> GetTask4() { return std::make_shared<Task4>(); }

	/// <summary>
	/// ������ 5
	/// </summary>	
	std::shared_ptr<ITask> GetTask5() { return std::make_shared<Task5>(); }

	/// <summary>
	/// ����������
	/// </summary>
	virtual ~TasksLocator() = default;

private:

	/// <summary>
	/// ������ ������������
	/// </summary>	
	TasksLocator& operator = (const TasksLocator&) = delete;

	/// <summary>
	/// ������ �����������
	/// </summary>	
	TasksLocator(const TasksLocator&) = delete;
};
