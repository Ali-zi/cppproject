#ifndef ACTIONCARD_H
#define ACTIONCARD_H

#include "StartCard.h"
#include "Player.h"
#include "QueryResult.h"

//class ActionCard is abstract
class ActionCard: public StartCard {

public:
	virtual QueryResult query() = 0;
	virtual void perfom(Table& table, Player* player, QueryResult query) = 0;
};

#endif