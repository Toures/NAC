#include <iostream>
#include "../headers/matrix.h"
#include "../headers/Vektor.h"
#include "../headers/Vektor2D.h"

int main() {
	Matrix mat;
	mat.ausgabe();
	Vektor2D a(3,1);
	Vektor2D b(1,2);
	Vektor2D c;
	c.addiere(a);
	b.addiere(c);
	std::cout << "Betrag c: " << c.betrag() << std::endl;
	std::cout << "Betrag b: " << b.betrag() << std::endl;	
}
