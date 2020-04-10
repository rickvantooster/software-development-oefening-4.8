#include "Hond.h"

Hond::Hond(std::string naam) : Huisdier(naam), Graver() {

}

void Hond::maakGeluid() {
	std::cout << "*Woef*" << std::endl;
}

void Hond::kwispel() {
	std::cout << "*kwispel*" << std::endl;
}

void Hond::graaf() {
	std::cout << Hond::getNaam() << " Graaft" << std::endl;
}