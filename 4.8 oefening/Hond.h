#include "Huisdier.h"
#include "Graver.h"
#pragma once
class Hond : public Huisdier, public Graver
{
public:
	Hond(std::string naam);
	void maakGeluid() override;
	void kwispel();
	void graaf() override;
};

