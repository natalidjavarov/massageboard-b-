
#include "Board.hpp"
#include <stdio.h>
#include <string.h>
#include <map>
#include <algorithm>
#include <iostream>
#include <stdexcept>
using namespace std;

const char BOARD_EMPTY='_';

namespace ariel{
void Board::post( unsigned int row,  unsigned int col, Direction d, string massage)
{
	if(mincol > col) mincol = col;
	if(minrow > row ) minrow = row;
	unsigned int length = massage.length();


	if (d == Direction::Horizontal){	
		for ( unsigned int i = 0; i < length; i++){
		board[row][col] = massage.at(i);
		maxcol = std::max(col,maxcol);
		col++;
		}
	}
	else{
		for ( unsigned int i = 0; i < length; i++){
		board[row][col] = massage.at(i);
		maxrow = std::max(row,maxrow);
		row++;
		}
	}
}
string Board::read(unsigned int row, unsigned int col, Direction d, unsigned int length){
	string message;
		if (d == Direction::Horizontal){	
		for (unsigned int i = 0; i < length; i++){
			if(board[row][col] != 0){
			message+=board[row][col];
			}
			else{
				message += BOARD_EMPTY;
			}
			col++;
		}
	}
	else{
		for ( unsigned int i = 0; i < length; i++){
			if(board[row][col] != 0){
			message+=(board[row][col]);
			}
			else{
				message += BOARD_EMPTY;
			}
			row++;
		}
	}
	return message;
}
void Board::show(){
	for(unsigned int i=mincol;i<=maxcol;i++){

		cout << i << ":" ;
		
		for(unsigned int j=minrow;j<= maxrow;j++){
			if(board[i][j] != 0){
				cout << board[i][j];
			}
			else{
				cout << BOARD_EMPTY;
			}
		}
		cout << "\n";

	}
}

}

