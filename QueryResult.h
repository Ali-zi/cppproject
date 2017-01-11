#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H

#include <string>
#include <iostream>

using namespace std;

class QueryResult {
public:
	string b;
	string d_playerName;
	string d_otherPlayerName;
	string hold_info;
	int d_row;
	int d_column;
	int d_newRow;
	int d_newCol;
	QueryResult(string);
	QueryResult(string, string);
	QueryResult(string, int, int);
	QueryResult(int, int, int, int);
};

#endif
