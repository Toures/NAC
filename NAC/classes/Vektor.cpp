#include "../headers/Vektor.h"
#include "math.h"

Vektor::Vektor(void)
{

}
int Vektor::betrag(){
	int anzahl_Element;
	float counter;
	anzahl_Element=m_Spalten*m_Zeilen;
	for(int i=0;i<m_Zeilen;i++){
		counter+=(m_Element[i]*m_Element[i]);
	}
	return sqrt(counter);
}


Vektor::~Vektor(void)
{
}
