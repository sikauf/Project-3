/*
 * polybius.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <#Names#>
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2022
 *
 * <#description#>
 */


#include "polybius.h"
#include <string>
using namespace std;

string mixKey(string key){
    string base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string output = key + base;
    return removeDuplicate(output);
}

void fillGrid(char grid[SIZE][SIZE], string content){
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < SIZE; ++i){
        for (j = 0; j < SIZE; ++j){
            grid[i][j] = content.at(k);
            ++k;
        }
    }
}

string findInGrid(char c, char grid[SIZE][SIZE]){
    int i = 0;
    int j = 0;
    char row;
    char column;
    string output;
    for (i = 0; i < SIZE; ++i){
        for (j = 0; j < SIZE; ++j){
            if (grid[i][j] == c){
                row = i + 48;
                column = j + 48;
                output += row;
                output += column;
            }
        }
    }
    return output; 
}

string polybiusSquare(char grid[SIZE][SIZE], string key, string original, bool encrypt){
    
    return ""; //FIX
}
