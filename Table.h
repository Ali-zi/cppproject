#ifndef TABLE_H
#define TABLE_H

#include "StartStack.h"
#include <string>
#include <vector>

class Table {
	friend class ActionCard;
	shared_ptr<StartStack> _middleStack;
	std::vector<std::vector<std::shared_ptr<AnimalCard>>> d_table;

public:
	Table() {
		for (int k = 0;k < 103;k++) {
			std::vector<std::shared_ptr<AnimalCard>> vector;
			for (int i = 0;i < 103;i++) {
				vector.push_back(NULL);
			}
			d_table.push_back(vector);
		}
		_middleStack = make_shared<StartStack>();
		d_table[52][52] = _middleStack;
	}

	int addAt(std::shared_ptr<AnimalCard> _playedCard, int row, int col) {
		d_table[row][col] = _playedCard;
	}

	Table& operator+=(std::shared_ptr<ActionCard> _actionCard) {
		*_middleStack += _actionCard;
	}

	Table& operator-=(std::shared_ptr<ActionCard> _actionCard) {
		*_middleStack -= _actionCard;
	}

	std::shared_ptr<AnimalCard> pickAt(int row, int col) {
		return d_table[row][col];
	}

	bool win(std::string& animal);
};

#endif