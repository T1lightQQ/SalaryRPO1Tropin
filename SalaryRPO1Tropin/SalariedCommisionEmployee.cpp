#include "SalariedCommisionEmployee.hpp"

SalariedCommisionEmployee::SalariedCommisionEmployee(std::string name, double salary, double sales, double commisionRate)
	: SalariedEmployee (name, salary)
{
	SetSales(sales);
	SetCommisionRate(commisionRate);
}

void SalariedCommisionEmployee::SetSales(double sales)
{
	while (true)
	{
		if (sales < 0.0)
		{
			std::cout << "Ошибка объема продаж. Не может быть меньше 0; \nВведите новые объемы продаж: ";
			std::cin >> sales;
		}
		else
		{
			this->sales = sales;
			break;
		}
	}
}

void SalariedCommisionEmployee::SetCommisionRate(double commisionRate)
{
	while (true)
	{
		if (commisionRate < 0.0 || commisionRate >= 1.0)
		{
			std::cout << "Ошибка процентной ставки. \nВведите новую процентную ставку: ";
			std::cin >> commisionRate;
		}
		else
		{
			this->commisionRate = commisionRate;
			break;
		}
	}
}

double SalariedCommisionEmployee::GetSales() const
{
	return sales;
}

double SalariedCommisionEmployee::GetCommisionRate() const
{
	return commisionRate;
}

double SalariedCommisionEmployee::Earnings() const
{
	return SalariedEmployee::Earnings() + GetSales() * GetCommisionRate();
}

std::string SalariedCommisionEmployee::toString() const
{
	return std::format("{}\nПродажи: {}, \n% Продаж: {}", SalariedEmployee::toString(), sales, commisionRate);
}
