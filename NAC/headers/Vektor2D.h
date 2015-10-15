#ifndef _VEKTOR2D_HEADER_
#define _VEKTOR2D_HEADER_

#include "Vektor.h"
class Vektor2D :
	public Vektor
{
public:
	Vektor2D(void);
	Vektor2D(int, int);
	void addiere(Vektor2D v);
	virtual ~Vektor2D(void);
};

#endif /*_VEKTOR2D_HEADER_*/
