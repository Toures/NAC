#ifndef _MATRIX_HEADER_
#define _MATRIX_HEADER_

class Matrix{
	private:
		static int counter;
	protected:
		int m_Zeilen;
		int m_Spalten;
		float m_Element [2];
	public:
		Matrix();
		static int getCounter();
		virtual void ausgabe();
		virtual ~Matrix();
};

#endif /*_MATRIX_HEADER_*/
