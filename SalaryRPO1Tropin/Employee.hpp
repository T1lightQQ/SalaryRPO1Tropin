#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

#include <string>
#include <Windows.h>
#include <iostream>
#include <format>


class Employee
{
public:
	
	virtual double Earnings() const = 0;

	virtual std::string toString() const = 0;

	virtual ~Employee() = default;

	Employee(std::string name) : name(name) {}

protected:
	std::string name;
	double sales = 0.0;
	double commisionRate = 0.0;
	double salary = 0.0;
};

#endif _EMPLOYEE_HPP_


