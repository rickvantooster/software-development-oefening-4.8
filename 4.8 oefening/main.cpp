#include<iostream>
#include "Dierenwinkel.h"

int main() {
	Dierenwinkel winkel = Dierenwinkel();

	Hond hond1 = Hond("Bobby");
	winkel.voegToe(&hond1);

	Kat kat1 = Kat("Garfield");
	winkel.voegToe(&kat1);

	Hamster hamster1 = Hamster("knabbel");

	winkel.voegToe(&hamster1);

	winkel.printLijst();





	return 0;
}