/*
 * caesar.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Sam Kaufman, Jared Klein
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2022
 *
 * <#description#>
 */

#include "caesar.h"
#include <iostream>

char shiftAlphaCharacter(char c, int n);

string ceaserCipher(string original, int key, bool encrypt);
