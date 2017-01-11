#ifndef HAND_H
#define HAND_H

#include <list>
#include <iostream>
#include "AnimalCard.h"

using namespace std;

class Hand {
	list<shared_ptr<AnimalCard> >* d_cardHand;
public:
	Hand() {
		d_cardHand = new list<shared_ptr<AnimalCard> >();		//initializes the list for the hand
	}

	Hand& operator+=(shared_ptr<AnimalCard> _animalCard) {
		d_cardHand->push_back(_animalCard);
	}

	Hand& operator-=(shared_ptr<AnimalCard> _animalCard) {
		bool found = find(d_cardHand->begin(), d_cardHand->end(), _animalCard) != d_cardHand->end();
		if (found) {
			d_cardHand->remove(_animalCard);
			return *this;
		}
		cerr << "Missing Card!";
	}
	
	shared_ptr<AnimalCard> operator[](int _position) {
		list<shared_ptr<AnimalCard> >::iterator it = d_cardHand->begin();
		std::advance(it, _position);
		return *it;
	}

	list<shared_ptr<AnimalCard> >& getList() {
		return *d_cardHand;
	}

	int noCards() {
		return d_cardHand->size();
	}

};

ostream& operator<<(ostream& _out, Hand& _hand) {
	for (int size = 0; size < _hand.noCards(); size++) {
		_out << size << "  ";
	}
	_out << endl;

	for (list<shared_ptr<AnimalCard> >::iterator it = _hand.getList().begin(); it != _hand.getList().end(); ++it) {
		_out << *it;
	}

	
	
	return _out;
}


#endif