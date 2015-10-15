#ifndef _MATRIX_HEADER_
#define _MATRIX_HEADER_

class Matrix{
	protected:
		int m_Zeilen;
		int m_Spalten;
		float m_Element [2];
	public:
		Matrix();
		void ausgabe();
		~Matrix();
};

#endif /*_MATRIX_HEADER_*/
