#include "../headers/matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
	:m_Zeilen(2),
	m_Spalten(1) {
	cout << "Standardkonstruktor von Matrix wurde aufgerufen" << endl;
}

void Matrix::ausgabe() {
	for(int i = 0; i < m_Zeilen; i++) {
		for(int k = 0; k < m_Spalten; k++) {
			cout << m_Element[i] << ", ";

		}
	}
}

Matrix::~Matrix() {
	cout << "Matrix ";
	ausgabe();
	cout << "wird zerstört." << endl;
}
