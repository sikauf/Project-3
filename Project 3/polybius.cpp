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

string mixKey(string key);

void fillGrid(char grid[SIZE][SIZE], string content);

string findInGrid(char c, char grid[SIZE][SIZE]);

string polybiusSquare(char grid[SIZE][SIZE], string key, string original, bool encrypt);
