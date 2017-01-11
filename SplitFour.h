#ifndef SPLITFOUR_H
#define SPLITFOUR_H

#include "AnimalCard.h"

class SplitFour: public AnimalCard{
protected:
	Orientation d_orientaion = Orientation::Up;
	EvenOdd d_evenOdd = EvenOdd::Even;
public:
	SplitFour(std::string& _animals) {
		d_animals = _animals;
	}
	
	void setOrientation(Orientation e_orientation) {
			d_orientaion = e_orientation;
	}

	void setRow(EvenOdd e_row) { d_evenOdd = e_row; }

	EvenOdd getRow() { return d_evenOdd; }

	void printRow(EvenOdd outpRow) {
		switch (outpRow) {
		case EvenOdd::Even:
			cout << d_animals.substr(0, 2);
			break;
		case EvenOdd::Odd:
			cout << d_animals.substr(2, 2);
			break;
		default:
			break;
		}
	}
};

#endif