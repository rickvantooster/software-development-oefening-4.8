#include "Huisdier.h"
#include "Klimmer.h"
#pragma once
class Kat : public Huisdier, public Klimmer
{
public:
	Kat(std::string naam);
	void maakGeluid() override;
	void spin();
	void klim() override;
	
};

