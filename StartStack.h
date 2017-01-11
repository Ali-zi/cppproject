#ifndef STARTSTACK_H
#define STARTSTACK_H

#include <memory>
#include <deque>
#include "AnimalCard.h"
#include "ActionCard.h"
#include "StartCard.h"

class StartStack: public AnimalCard {
	Orientation d_orientation;
	EvenOdd d_evenOdd;
	deque<shared_ptr<AnimalCard> > *d_actionCardStack;
	shared_ptr<StartCard> d_startCard;
	
public:
	StartStack& operator+=(shared_ptr<ActionCard> _aActionCard) {
		d_actionCardStack->push_front(_aActionCard);
		return *this;											//operator overload
	}

	StartStack& operator-=(shared_ptr<ActionCard> _aActionCard) {
		d_actionCardStack->push_back(_aActionCard);				//operator overload
		return *this;
	}
	
	shared_ptr<StartCard> getStartCard() {
		return d_startCard;
	}
	
	StartStack(){
		d_actionCardStack = new deque<shared_ptr<AnimalCard> >();	//initializes deque
		d_startCard = make_shared<StartCard>();					//initiliazes a StartCard
		d_actionCardStack->push_front(d_startCard);				//places StartCard at the top of the deque
	}
	
	void setOrientation(Orientation _orientation){ d_orientation = _orientation; }
	
	void setRow(EvenOdd e_row) { d_evenOdd = e_row; }
	
	EvenOdd getRow() { return d_evenOdd; }

	void printRow(EvenOdd outpRow) {
		switch (outpRow) {
		case EvenOdd::Even:
			cout << d_animals.substr(0, 2);
		case EvenOdd::Odd:
			cout << d_animals.substr(2, 2);
		}
	}
};

#endif