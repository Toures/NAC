#include <iostream>
#include "../headers/matrix.h"
#include "../headers/Vektor.h"
#include "../headers/Vektor2D.h"

int main() {
	{
		Matrix mat;
		mat.ausgabe();
		Vektor2D a(3,4);
		Vektor2D b(1,2);
		Vektor2D c(1,4);
		std::cout << std::endl;
		std::cout << "Betrag a: " << a.betrag() << std::endl;
		std::cout << "Betrag c: " << c.betrag() << std::endl;
		std::cout << "Betrag b: " << b.betrag() << std::endl;

		//	Vektor2D *w = new Vektor2D();
		//	Vektor2D *z = new Vektor2D(-3,1);
		//	a.addiere(*z);
		//	std::cout << "Betrag a: "; a.ausgabe(); std::cout << std::endl;
		//	w->addiere(*z);
		//	std::cout << "Betrag w: "; w->ausgabe(); std::cout << std::endl;
		//	w->addiere(b);
		//	std::cout << "Betrag w: "; w->ausgabe(); std::cout << std::endl;
		//
		//	Vektor2D u(1,2);
		//	u.kopiereIn(w);
		//	u.kopiereIn(&a);
		//	std::cout << "Betrag w: "; w->ausgabe(); std::cout << std::endl;
		//	std::cout << "Betrag a: "; a.ausgabe(); std::cout << std::endl;
		//	tausche(z, &a);
		//	std::cout << "Betrag a: "; a.ausgabe(); std::cout << std::endl;
		//	std::cout << "Betrag z: "; z->ausgabe(); std::cout << std::endl;

		Vektor2D v(1,1), w(-5,0);
		std::cout << ""<< v.betrag() << std::endl;
		std::cout << "Betrag w: " << w.betrag() << std::endl;
		std::cout << "Winkel zwischen v und w ist " << v.winkel(&w) << std::endl;

		std::cout << Matrix::getCounter() << std::endl;
	}
	std::cout << Matrix::getCounter() << std::endl;
}

