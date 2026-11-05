#include <stdio.h>
#include <string>

class CRoue {
private:

	int dimension;
	std::string marque;
	float pression;

public:
	CRoue(int dimension, std::string marque, float pression);
	~CRoue();

		void gonfler(float pression);
		void degonfler(float pression);
		void crever();
		void afficher();

};