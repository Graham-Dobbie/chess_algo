#include <iostream>
#include "chess.hpp"
#include "tree.hpp"


using namespace chess;
using namespace tree;
using namespace std;

void e_greedy(Tree tree, int epsilon){
    

}

int play_game(Tree tree, int epsilon){

    string starting_fen = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
    Board board = Board(starting_fen);

    bool end = false;

    while (!end){
        // e greedy to chose move

        // make move

    }

   


}


void reward( Tree tree, int reward, int gamma){


}

void do_iteration(Tree tree, unordered_map<string, int> args){
    
    int outcome = play_game(tree, args["epsilon"]);

    reward(tree, outcome, args["gamma"]);

}

void train(int iterations, unordered_map<string, int> args){
    unordered_map<string, int>  init_args;
    init_args["gamma"] = 0.1;
    init_args["epsilon"] = 0.001;

    for(auto m = init_args.begin(); m != init_args.end(); m++){
        string arg_key = m->first;
        int arg_value = m->second;

        if( args.find(arg_key) == args.end()){
            args[arg_key] = arg_value;
        }
    }

    int gamma = args["gamma"];
    int epsilon = args["epsilon"];

    Tree TreeHandler = Tree();

    for(int i = 0; i <= iterations; i++){
        
        do_iteration(TreeHandler, args);

        if (i % 1000){
            TreeHandler.save_tree();
        }

    }
    
    
}


int main(int argc, char *argv[]) {
    
    Tree TreeHandler = Tree();


    return 0;
}