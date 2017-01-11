#include "AnimalCardFactory.h"
#include <algorithm>

AnimalCardFactory* AnimalCardFactory::_factoryInstance = NULL;
AnimalCardFactory* AnimalCardFactory::getFactory() {
	if (_factoryInstance == 0) {
		_factoryInstance = new AnimalCardFactory();
	}

	return _factoryInstance;
}

AnimalCardFactory::~AnimalCardFactory() {
	delete _factoryInstance;
}

Deck<std::shared_ptr<AnimalCard> > AnimalCardFactory::getDeck() {

	Deck<std::shared_ptr<AnimalCard> > _cardDeck = Deck<shared_ptr<AnimalCard> >();
	std::random_shuffle(_cardDeck.begin(), _cardDeck.end());
	return _cardDeck;
}