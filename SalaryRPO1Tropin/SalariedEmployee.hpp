#ifndef _SALARIEDEMPLOYEE_HPP_
#define _SALARIEDEMPLOYEE_HPP_

#include "Employee.hpp"


class SalariedEmployee : public Employee
{
public:
	SalariedEmployee(std::string name, double salary);

	void SetName(std::string name);
	void SetSalary(double salary);

	std::string GetName() const;
	double GetSalary() const;

	double Earnings() const override;
	std::string toString() const override;

	~SalariedEmployee() {};

private:
};

#endif // !_SALARIEDEMPLOYEE_HPP_