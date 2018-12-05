#pragma once
class Road
{

public:
	Car * car;
	

	void addCar(Car * car);
	bool checkCar();
	int getSpeed();
	void deleteCar();
	void replaceCar(Car * replacedCar);
	Car *getCar(Car *car);
	void setSpeed(int speed);
	void increaseSpeed();
	void decreaseSpeed();
	Road();
	~Road();

};