#include "pch.h"
#include "Car.h"
#include "Road.h"
#include <iostream>
#include <time.h>

using namespace std;

void Road::addCar(Car * car)
{
	
}

bool Road::checkCar()
{
	if (car != NULL)
		return true;
	else
		return false;
}

int Road::getSpeed()
{
	return car->getSpeed();
}

void Road::deleteCar()
{
	delete car;
	*car = NULL;
}

void Road::replaceCar(Car * replacedCar)
{
	car = replacedCar;
}

Car * Road::getCar(Car *car)
{
	return car;
}

void Road::setSpeed(int speed)
{
	car->setSpeed(speed);
}

void Road::increaseSpeed()
{
	car->increaseSpeed();
}

void Road::decreaseSpeed()
{
	car->decreaseSpeed();
}
