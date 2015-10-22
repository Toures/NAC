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
	void kopiereIn(Vektor2D* zielvar);
	void ausgabe();
	virtual ~Vektor2D(void);
};

#endif /*_VEKTOR2D_HEADER_*/
