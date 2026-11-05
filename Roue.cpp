#include "CRoue.h"



CRoue::CRoue(int dimension, std::string marque, float pression) : dimension(dimension), marque(marque), pression(pression) 

	dimension = dimension;
	marque = marque;
	pression = pression;

	CRoue ::~CRoue() {

	void CRoue::gonfler(float pression)
	{
		this->pression += pression;
	}

	void CRoue::degonfler(float pression)
	{
		this->pression -= pression;
	}
	void CRoue::crever()
	{
		This->pression = 0;
	}
	void CRoue::afficher()
	{
		cout::printf("Dimension: %d\nMarque: %s\nPression: %.2f\n", dimension, marque.c_str(), pression);
	}
}