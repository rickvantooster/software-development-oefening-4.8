#include "Huisdier.h"
#include <string>
#include "Graver.h"
#include "Klimmer.h"
#pragma once
class Hamster : public Huisdier, public Graver, public Klimmer
{
public:
	Hamster(std::string naam);
	void maakGeluid() override;
	void graaf() override;
	void klim() override;

};

