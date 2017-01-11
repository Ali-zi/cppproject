#include "QueryResult.h"

QueryResult::QueryResult(string _oB) :b(_oB) {}

QueryResult::QueryResult(string _playerName, string _oPlayerName)
	: d_playerName(_playerName), d_otherPlayerName(_oPlayerName) {}

QueryResult::QueryResult(string _playerName, int _row, int _col)
	: d_playerName(_playerName), d_row(_row), d_column(_col) {}

QueryResult::QueryResult(int _row, int _col, int _newRow, int _newCol)
	: d_row(_row), d_column(_col), d_newRow(_newRow), d_newCol(_newCol) {}