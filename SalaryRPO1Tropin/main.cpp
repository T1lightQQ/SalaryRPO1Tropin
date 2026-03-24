#include "SalariedCommisionEmployee.hpp"
//#include "Transport.hpp"
#include "SalariedEmployee.hpp"
//void VirtualPolimorfizm(const Transport* obj);
//void VirtualPolimorfizm(const Transport& obj);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Employee* emp1 = new SalariedEmployee("Ivan", 1000);
	Employee* emp2 = new SalariedCommisionEmployee("Boba", 200, 1000, 0.1);

	std::cout << emp1->toString() << "\n\n";
	std::cout << emp1->Earnings() << "\n\n";

	std::cout << emp2->toString() << "\n\n";
	std::cout << emp2->Earnings() << "\n\n";
	
	return 0;
}

//void VirtualPolimorfizm(const Transport* obj)
//{
//	std::cout << obj->toString();
//}
//
//void VirtualPolimorfizm(const Transport& obj)
//{
//	std::cout << obj.toString();
//}