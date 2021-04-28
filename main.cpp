#include <iostream>
#include "chess.hpp"
#include "tree.hpp"

using namespace chess;
using namespace std;

pair<Move, unordered_map<string>>  getMove(Board &board){

    MoveGenerator moveGenerator = board.getMoveGenerator();
    Move move = moveGenerator.nextMove();
    
    unordered_map<string> debug{
        {"is this working?" , "yes"}
    };

    return  pair<move, debug>;
}


int main(string name, string apikey) {
    
    TreeHandler = tree.TreeHandler()

    return 0;
}