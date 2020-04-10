#include <iostream>
#include <vector>
#include "Huisdier.h"
#include "Kat.h"
#include "Hond.h"
#include "Hamster.h"
#pragma once
class Dierenwinkel
{
private:
	std::vector<Huisdier*> lijst;

public:
	Dierenwinkel();
	void voegToe(Huisdier* dier);
	void printLijst();
};

