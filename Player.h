#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"	//Subject to change to have better structuring and avoid re-declarations

class Player {
	Hand d_hand;
	string d_secretAnimal;

public:
	friend std::ostream& operator<<(std::ostream& _oOut, Player _player);

	std::string swapSecretAnimal(std::string& _secretAnimal) {
		d_secretAnimal = _secretAnimal;
	}

	std::string getSecretAnimal() {
		return d_secretAnimal;
	}

	Hand& getHand() {
		return d_hand;
	}
};

std::ostream& operator<<(std::ostream& _oOut, Player _player) {
	unsigned char count = 0;
	list<shared_ptr<AnimalCard> > _printHand = _player.getHand().getList(); //use list to print out the hand
	while (count < _player.getHand().noCards())
		cout << count++ << "  ";
	cout << endl;
	

}

#endif // !PLAYER_H