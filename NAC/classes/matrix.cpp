#include "../headers/matrix.h"
#include <iostream>
using namespace std;

int Matrix::counter = 0;

Matrix::Matrix()
	:m_Zeilen(2),
	m_Spalten(1){
	Matrix::counter++;
}

int Matrix::getCounter() {
	return Matrix::counter;
}

void Matrix::ausgabe() {
	for(int i = 0; i < m_Zeilen; i++) {
		for(int k = 0; k < m_Spalten; k++) {
			cout << m_Element[i] << ", ";

		}
	}
}

Matrix::~Matrix() {
	Matrix::counter--;
}
