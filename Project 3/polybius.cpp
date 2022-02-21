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
#include <iostream>

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
    string gridString = mixKey(key);
    string output;
    fillGrid(grid, gridString);
    int size = original.size();
    int i = 0;
    if (encrypt == true){
        for (i = 0; i < size; ++i){
            if (original.at(i) == 32){
                output += " ";
            } else {
                string currChar = findInGrid(original.at(i), grid);
                output += currChar;
            }
        }
    } else {
        int across = 0;
        int down = 0;
        for (i = 0; i < size; ++i){
            if (original.at(i) == 32){
                output += " ";
            } else {
                char currChar = charToInt(original.at(i));
                down = charToInt(original.at(i));
                across = charToInt(original.at(i + 1));
                output += gridString.at((down * 6) + across);
                ++i;
            }
        }
    }
    return output;
}
