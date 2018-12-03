#pragma once


class Car
{
private:
	int carLength, VMax, V;
public:
	Car(int = 4, int = 10, int = 5);      //konstruktor z wartosciami domyslnymi	
	void setSpeed();
	void increaseSpeed();
	void decreaseSpeed();
};

class passengerCar : public Car
{
public:
	passengerCar(int = 4, int = 10, int = 5);
};

class truck6m : public Car
{
public:
	truck6m(int = 6, int = 8, int = 4);
};

class truck7m : public Car
{
public:
	truck7m(int = 7, int = 8, int = 4);
};

class truck14m : public Car
{
public:
	truck14m(int = 14, int = 6, int = 3);
};

class truck15m : public Car
{
public:
	truck15m(int = 15, int = 6, int = 3);
};

class truck17m : public Car
{
public:
	truck17m(int = 17, int = 6, int = 3);
};

class truck19m : public Car
{
public:
	truck19m(int = 19, int = 6, int = 3);
};

class truck25m : public Car
{
public:
	truck25m(int = 25, int = 6, int = 3);
};