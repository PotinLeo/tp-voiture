#include <Roue.h>

void main
{
	CRoue roue1(15, "Michelin", 2.5);
	roue1.afficher();
	roue1.gonfler(0.5);
	roue1.afficher();
	roue1.degonfler(1.0);
	roue1.afficher();
	roue1.crever();
	roue1.afficher();
}