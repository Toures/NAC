#include "../headers/Vektor.h"
#include "math.h"
#include <limits>

Vektor::Vektor(void)
{

}

float Vektor::betrag(){
	return sqrt(this->skalarprodukt(this));
	//return sqrt(skalarprodukt(this));
}

float Vektor::skalarprodukt(Vektor* v) {
	int anzahl_Element, anzahl_Element_V;
	float value;
	anzahl_Element = m_Spalten*m_Zeilen;
	anzahl_Element_V = v->m_Spalten*v->m_Zeilen;

	if(anzahl_Element != anzahl_Element_V)
		return std::numeric_limits<float>::quiet_NaN();

	for(int i=0;i<m_Zeilen;i++){
		value+=(m_Element[i]*v->m_Element[i]);
	}

	return value;
}

float Vektor::winkel(Vektor* v) {
	return acos((skalarprodukt(v))/((betrag()) * (v->betrag())));
}

Vektor::~Vektor(void)
{
}
