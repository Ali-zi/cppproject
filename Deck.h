#ifndef DECK_H 
#define DECK_H

#include <vector>
#include "NoSplit.h"
#include "SplitTwo.h"
#include "SplitThree.h"
#include "SplitFour.h"

template<class T> class Deck : public std::vector<T> {
	friend class AnimalCardFactory;
protected:
	Deck() {

	}

public:
	std::shared_ptr<T> draw();	//creates a shared_ptr to the card to be drawn. Returns such shared_ptr

};

#endif