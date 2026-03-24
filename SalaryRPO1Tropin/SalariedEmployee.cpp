#include "SalariedEmployee.hpp"

SalariedEmployee::SalariedEmployee(std::string name, double salary) : Employee(name)
{
	SetSalary(salary);
}

void SalariedEmployee::SetName(std::string name)
{
	while (true)
	{
		if (name.size() < 2 || name.size() >= 20)
		{
			std::cout << "Ошибка длинны имени. От 2 до 20 символов. \nВведие новое имя: ";
			std::cin >> name;
		}
		else
		{
			this->name = name;
			break;
		}
	}
}

void SalariedEmployee::SetSalary(double salary)
{
	while (true)
	{
		if (salary < 0.0)
		{
			std::cout << "Ошибка отрицательной зарплаты. \nВведите новую зарплату: ";
			std::cin >> salary;
		}
		else
		{
			this->salary = salary;
			break;
		}
	}
}

std::string SalariedEmployee::GetName() const
{
	return name;
}

double SalariedEmployee::GetSalary() const
{
	return salary;
}

double SalariedEmployee::Earnings() const
{
	return GetSalary();
}

std::string SalariedEmployee::toString() const
{
	return std::format("Имя: {}\nЗарплата: {}\n", name, salary);
}
