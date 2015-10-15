#ifndef _VEKTOR_HEADER_
#define _VEKTOR_HEADER_

#include "matrix.h"
class Vektor :
	public Matrix
{
public:
	Vektor(void);
	int betrag();
	virtual ~Vektor(void);
};

#endif /*_VEKTOR_HEADER_*/
