#ifndef NAMEOFPROJECT_COMBINE_H
#define NAMEOFPROJECT_H

#include <iostream>

class Combine {
private:
	double capacity;
	double consumption;
	double power;
protected:
	std::string nameOfProducer;
	std::string colour;
public:
	std::string model;
	int seria;

	double getCapacity() {
		return capacity;
	}
	double getConsumption() {
		return consumption;
	}
	double getPower() {
		return power;
	}
	std::string getNameOfProducer() {
		return  nameOfProducer;
	}
	std::string getColour() {
		return colour;
	}

	Combine();
	Combine(double, double, double, std::string, std::string);
	~Combine();
	void setPublicFields(std::string, int);
};

#endif //NAMEOFPROJECT_COMBINE_H

