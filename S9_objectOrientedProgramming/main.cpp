#include "Car.h"

int main()
{
	//Create Object 1 of type car
	Car c1;
	c1.setIsElectric(true);

	//Create Object 2 of type care
	Car c2;
	c2.setIsElectric(false);

	//Start engines
	c1.startEngine();
	c2.startEngine();

}