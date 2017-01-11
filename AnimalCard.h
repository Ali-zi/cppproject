#ifndef ANIMALCARD_H
#define ANIMALCARD_H

#include <memory>
#include <string>
#include <iostream>

using namespace std;

//AnimalCard is an abstract class
class AnimalCard {
	friend class Player;
protected:
	enum class Orientation {Up = 1, Down};
	enum class EvenOdd {Even = 1, Odd, Default};
	std::string d_animals;
public:
	virtual void setOrientation(Orientation e_orientation) = 0;
	virtual void setRow(EvenOdd e_row) = 0;
	virtual EvenOdd getRow() = 0;
	virtual void printRow(EvenOdd outpRow) = 0;
};

#endif