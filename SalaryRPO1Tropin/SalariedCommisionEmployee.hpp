#ifndef _SALARIEDCOMMISIONEMPLOYEE_HPP_
#define _SALARIEDCOMMISIONEMPLOYEE_HPP_

#include "Employee.hpp"

class SalariedCommisionEmployee : public Employee
{
public:
	SalariedCommisionEmployee(std::string name, double salary, double sales, double commisionRate);
	
	void SetSales(double sales);
	void SetCommisionRate(double commisionRate);

	double GetSales() const;
	double GetCommisionRate() const;

	double Earnings() const override;
	std::string toString() const override;

	~SalariedCommisionEmployee() {};

private:
};

#endif //_SALARIEDCOMMISIONEMPLOYEE_HPP_
