#pragma once
#include <string>
#include <format>

//class Transport
//{
//public:
//	explicit Transport(int speed) : speed(speed) {}
//
//	virtual double conTrip() const = 0;
//	virtual std::string toString() const { return std::format("{} base transport\n", speed); }
//
//
//
//	virtual ~Transport() = default;
//	
//	int speed = 0;
//
//private:
//	
//};
//
//class Taxi : public Transport
//{
//public:
//	Taxi(int speed) : Transport(speed) {}
//
//	double conTrip() const override { return speed * 2; }
//
//	std::string toString() const override { return std::to_string(conTrip()); }
//
//	~Taxi() {}
//private:
//
//};
//
//class TripService
//{
//public:
//	void trip(const Transport* obj)
//	{
//		std::cout << "Я служба доставки";
//		std::cout << obj->toString();
//		std::cout << "Цена поездки: " << obj->conTrip() << "\n\n";
//	}
//
//	void tripi(Transport* obj)
//	{
//		if (typeid(*obj) == typeid(Taxi))
//		{
//			Taxi* taxi = (Taxi*) obj;
//			std::cout << "Я служба доставки";
//			std::cout << taxi->toString();
//		}
//	}
//};
//
