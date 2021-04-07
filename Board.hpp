#pragma once
#include "Direction.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <map>


using namespace std;
using ariel::Direction;

namespace ariel{
	class Board {
		public:
		std::map<unsigned int,std::map <unsigned int,char>> board;
		unsigned int maxcol = 0;
		unsigned int maxrow = 0;
		unsigned int mincol = 2147483647;
		unsigned int minrow = 2147483647;
		void post( unsigned int row,  unsigned int col, Direction d, string masagge);
		string read( unsigned int row,  unsigned int col, Direction d,  unsigned int length);
		void show();
	};
}

