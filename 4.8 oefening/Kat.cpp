#include "Kat.h"

Kat::Kat(std::string naam) : Huisdier(naam)
{
}

void Kat::maakGeluid()
{
	std::cout << "*Miauw*" << std::endl;
}

void Kat::spin()
{
	std::cout << Kat::getNaam() << " Spint" << std::endl;
}

void Kat::klim() {
	std::cout << Kat::getNaam() << " Klimt" << std::endl;
}

