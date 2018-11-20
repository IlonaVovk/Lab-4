#include "Combine.h"
#include <iostream>
using namespace std;

Combine::Combine() {

}
Combine::Combine(double capacity_p, double consumption_p, double power_p, std::string nameOfProducer_p, std::string colour_p) {
	capacity = capacity_p;
	consumption = capacity_p;
	power = power_p;
	nameOfProducer = nameOfProducer_p;
	colour = colour_p;
}
Combine::~Combine() {

}

void Combine::setPublicFields(std::string model_p, int seria_p) {
	model = model_p;
	seria = seria_p;
}