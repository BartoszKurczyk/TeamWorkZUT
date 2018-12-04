#include "pch.h"
#include "Car.h"
#include <iostream>
#include <time.h>

using namespace std;

Car::Car(int speed, int max_speed, int length)
{
	V = speed;
	VMax = max_speed;
	carLength = length;
}

void Car::setSpeed()
{
	srand(time(NULL));
	V = ((rand() % VMax) + 1);                                   //nie wiem wlasnie jak to V uzyc np w konstruktorze passengerCar
}
void Car::increaseSpeed()
{
	while (VMax > V)
	{
		V += 1;
	}
}
void Car::decreaseSpeed()
{
	while (V > 1)
	{
		V -= 1;
	}
}

passengerCar::passengerCar(int speed_pass, int max_speed_pass, int length_pass)
	:Car(length_pass, max_speed_pass, speed_pass)					//uzycie konstruktora klasy Car w konstruktorze klasy passengerCar
{
	cout << "Auto osobowe. Aktualna predkosc: " << speed_pass << ", predkosc maksymalna: " << max_speed_pass << ", dlugosc: " << length_pass << endl;
}
passengerCar::~passengerCar()
{
	
}

truck6m::truck6m(int speed_6m, int max_speed_6m, int length_6m)
	: Car(length_6m, max_speed_6m, speed_6m)
{
	cout << "Ciezarowka 6m. Aktualna predkosc: " << speed_6m << ", predkosc maksymalna: " << max_speed_6m << ", dlugosc: " << length_6m << endl;
}
truck6m::~truck6m()
{

}

truck7m::truck7m(int speed_7m, int max_speed_7m, int length_7m)
	: Car(speed_7m, max_speed_7m, length_7m)
{

}
truck7m::~truck7m()
{

}

truck14m::truck14m(int speed_14m, int max_speed_14m, int length_14m)
	: Car(speed_14m, max_speed_14m, length_14m)
{

}
truck14m::~truck14m()
{

}

truck15m::truck15m(int speed_15m, int max_speed_15m, int length_15m)
	: Car(speed_15m, max_speed_15m, length_15m)
{

}
truck15m::~truck15m()
{

}

truck17m::truck17m(int speed_17m, int max_speed_17m, int length_17m)
	: Car(speed_17m, max_speed_17m, length_17m)
{

}
truck17m::~truck17m()
{

}

truck19m::truck19m(int speed_19m, int max_speed_19m, int length_19m)
	: Car(speed_19m, max_speed_19m, length_19m)
{

}
truck19m::~truck19m()
{

}

truck25m::truck25m(int speed_25m, int max_speed_25m, int length_25m)
	: Car(speed_25m, max_speed_25m, length_25m)
{

}
truck25m::~truck25m()
{

}