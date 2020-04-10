#include "Hamster.h"

Hamster::Hamster(std::string naam) : Huisdier(naam)
{

}

void Hamster::maakGeluid()
{
	std::cout << "*squeak*" << std::endl;
}


void Hamster::graaf() {
	std::cout << Hamster::getNaam() << " Graaft" << std::endl;
}

void Hamster::klim() {
	std::cout << Hamster::getNaam() << " Klimt" << std::endl;
}
