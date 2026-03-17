#ifndef _SALARIEDCOMMISIONEMPLOYEE_HPP_
#define _SALARIEDCOMMISIONEMPLOYEE_HPP_

#include "SalariedEmployee.hpp"
class SalariedCommisionEmployee : public SalariedEmployee
{
public:
	SalariedCommisionEmployee(std::string name, double salary, double sales, double commisionRate);
	
	void SetSales(double sales);
	void SetCommisionRate(double commisionRate);

	double GetSales() const;
	double GetCommisionRate() const;

	double Earnings() const;
	std::string toString() const;

private:
	double sales = 0.0;
	double commisionRate = 0.0;
};

#endif //_SALARIEDCOMMISIONEMPLOYEE_HPP_

