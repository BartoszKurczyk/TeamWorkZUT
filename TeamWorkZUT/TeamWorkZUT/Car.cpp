#include "pch.h"
#include "Car.h"
#include <iostream>
#include <time.h>

using namespace std;

Car::Car(int length, int max_speed, int speed)
{
	carLength = length;
	VMax = max_speed;
	V = speed;
}

void Car::setSpeed()
{
	srand(time(NULL));
	V = ((rand() % VMax) + 1);                                   //nie wiem wlasnie jak to V uzyc np w konstruktorze passengerCar
}
void Car::increaseSpeed()
{
	V += 1;
}
void Car::decreaseSpeed()
{
	V -= 1;
}

passengerCar::passengerCar(int length_pass, int max_speed_pass, int speed_pass)
	:Car(length_pass, max_speed_pass, speed_pass)					//uzycie konstruktora klasy Car w konstruktorze klasy passengerCar
{
	cout << "Auto osobowe. Dlugosc: " << length_pass << ", predkosc maksymalna: " << max_speed_pass << ", predkosc aktualna: " << speed_pass << endl;
}

truck6m::truck6m(int length_6m, int max_speed_6m, int speed_6m)
	: Car(length_6m, max_speed_6m, speed_6m)
{
	cout << "Ciezarowka 6m. Dlugosc: " << length_6m << ", predkosc maksymalna: " << max_speed_6m << ", predkosc aktualna: " << speed_6m << endl;
}

truck7m::truck7m(int length_7m, int max_speed_7m, int speed_7m)
	: Car(length_7m, max_speed_7m, speed_7m)
{

}

truck14m::truck14m(int length_14m, int max_speed_14m, int speed_14m)
	: Car(length_14m, max_speed_14m, speed_14m)
{

}

truck15m::truck15m(int length_15m, int max_speed_15m, int speed_15m)
	: Car(length_15m, max_speed_15m, speed_15m)
{

}

truck17m::truck17m(int length_17m, int max_speed_17m, int speed_17m)
	: Car(length_17m, max_speed_17m, speed_17m)
{

}

truck19m::truck19m(int length_19m, int max_speed_19m, int speed_19m)
	: Car(length_19m, max_speed_19m, speed_19m)
{

}

truck25m::truck25m(int length_25m, int max_speed_25m, int speed_25m)
	: Car(length_25m, max_speed_25m, speed_25m)
{

}