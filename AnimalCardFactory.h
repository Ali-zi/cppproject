#ifndef ANIMALCARDFACTORY_H
#define ANIMALCARDFACTORY_H

#include "Deck.h"
#include <iostream>

class AnimalCardFactory {
private:
	static AnimalCardFactory* _factoryInstance;
	AnimalCardFactory() {}
	AnimalCardFactory(const AnimalCardFactory&) { std::cout << "NOOOO COPYING" << std::endl; }
	~AnimalCardFactory();

public:
	static AnimalCardFactory* getFactory();
	Deck<std::shared_ptr<AnimalCard> > getDeck();
};

#endif