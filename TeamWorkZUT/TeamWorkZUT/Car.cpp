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

int Car::setSpeed(int max_speed)
{
	VMax = max_speed;
	srand(time(NULL));
	V = ((rand() % VMax) + 1);
	return V;
}

void Car::increaseSpeed()
{
	if(VMax > V)
	{
		V += 1;
	}
}
void Car::decreaseSpeed()
{
	if(V > 1)
	{
		V -= 1;
	}
}

passengerCar::passengerCar(int speed_pass, int max_speed_pass, int length_pass)
	:Car(speed_pass, max_speed_pass, length_pass)
{
	speed_pass = setSpeed(max_speed_pass);
	cout << "Auto osobowe. Aktualna predkosc: " << speed_pass << ", predkosc maksymalna: " << max_speed_pass << ", dlugosc: " << length_pass << endl;
}
passengerCar::~passengerCar()
{
	
}

truck6m::truck6m(int speed_6m, int max_speed_6m, int length_6m)
	: Car(speed_6m, max_speed_6m, length_6m)
{
	speed_6m = setSpeed(max_speed_6m);
	cout << "Ciezarowka 6m. Aktualna predkosc: " << speed_6m << ", predkosc maksymalna: " << max_speed_6m << ", dlugosc: " << length_6m << endl;
}
truck6m::~truck6m()
{

}

truck7m::truck7m(int speed_7m, int max_speed_7m, int length_7m)
	: Car(speed_7m, max_speed_7m, length_7m)
{
	speed_7m = setSpeed(max_speed_7m);
	cout << "Ciezarowka 7m. Aktualna predkosc: " << speed_7m << ", predkosc maksymalna: " << max_speed_7m << ", dlugosc: " << length_7m << endl;

}
truck7m::~truck7m()
{

}

truck14m::truck14m(int speed_14m, int max_speed_14m, int length_14m)
	: Car(speed_14m, max_speed_14m, length_14m)
{
	speed_14m = setSpeed(max_speed_14m);
	cout << "Ciezarowka 14m. Aktualna predkosc: " << speed_14m << ", predkosc maksymalna: " << max_speed_14m << ", dlugosc: " << length_14m << endl;
}
truck14m::~truck14m()
{

}

truck15m::truck15m(int speed_15m, int max_speed_15m, int length_15m)
	: Car(speed_15m, max_speed_15m, length_15m)
{
	speed_15m = setSpeed(max_speed_15m);
	cout << "Ciezarowka 15m. Aktualna predkosc: " << speed_15m << ", predkosc maksymalna: " << max_speed_15m << ", dlugosc: " << length_15m << endl;
}
truck15m::~truck15m()
{

}

truck17m::truck17m(int speed_17m, int max_speed_17m, int length_17m)
	: Car(speed_17m, max_speed_17m, length_17m)
{
	speed_17m = setSpeed(max_speed_17m);
	cout << "Ciezarowka 17m. Aktualna predkosc: " << speed_17m << ", predkosc maksymalna: " << max_speed_17m << ", dlugosc: " << length_17m << endl;
}
truck17m::~truck17m()
{

}

truck19m::truck19m(int speed_19m, int max_speed_19m, int length_19m)
	: Car(speed_19m, max_speed_19m, length_19m)
{
	speed_19m = setSpeed(max_speed_19m);
	cout << "Ciezarowka 19m. Aktualna predkosc: " << speed_19m << ", predkosc maksymalna: " << max_speed_19m << ", dlugosc: " << length_19m << endl;
}
truck19m::~truck19m()
{

}

truck25m::truck25m(int speed_25m, int max_speed_25m, int length_25m)
	: Car(speed_25m, max_speed_25m, length_25m)
{
	speed_25m = setSpeed(max_speed_25m);
	cout << "Ciezarowka 25m. Aktualna predkosc: " << speed_25m << ", predkosc maksymalna: " << max_speed_25m << ", dlugosc: " << length_25m << endl;
}
truck25m::~truck25m()
{

}