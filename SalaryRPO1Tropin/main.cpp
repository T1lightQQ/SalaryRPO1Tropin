#include "SalariedCommisionEmployee.hpp"




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SalariedCommisionEmployee one("Vlad", 2000, 400000, 0.1);
	std::cout << one.toString();
	std::cout << one.Earnings();

	
	return 0;
}