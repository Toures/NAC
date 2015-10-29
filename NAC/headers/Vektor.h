#ifndef _VEKTOR_HEADER_
#define _VEKTOR_HEADER_

#include "matrix.h"
class Vektor :
	public Matrix
{
public:
	Vektor(void);
	float betrag();
	float skalarprodukt(Vektor*);
	float winkel(Vektor*);
	virtual ~Vektor(void);
};

#endif /*_VEKTOR_HEADER_*/
