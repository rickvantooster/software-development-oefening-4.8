#include <string>
#include <iostream>
#pragma once
class Huisdier
{
private:
    std::string naam;

public:
    Huisdier(std::string naam);
    std::string getNaam();
    virtual void maakGeluid() = 0;
};