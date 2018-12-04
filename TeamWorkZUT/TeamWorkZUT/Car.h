#pragma once


class Car
{
private:
	int V, VMax, carLength;
public:
	Car(int, int, int);
	int setSpeed(int);
	void increaseSpeed();
	void decreaseSpeed();
};

class passengerCar : public Car
{
public:
	passengerCar(int = 5, int = 10, int = 4);
	~passengerCar();
};

class truck6m : public Car
{
public:
	truck6m(int = 4, int = 8, int = 6);
	~truck6m();
};

class truck7m : public Car
{
public:
	truck7m(int = 4, int = 8, int = 7);
	~truck7m();
};

class truck14m : public Car
{
public:
	truck14m(int = 3, int = 6, int = 14);
	~truck14m();
};

class truck15m : public Car
{
public:
	truck15m(int = 3, int = 6, int = 15);
	~truck15m();
};

class truck17m : public Car
{
public:
	truck17m(int = 3, int = 6, int = 17);
	~truck17m();
};

class truck19m : public Car
{
public:
	truck19m(int = 3, int = 6, int = 19);
	~truck19m();
};

class truck25m : public Car
{
public:
	truck25m(int = 3, int = 6, int = 25);
	~truck25m();
};