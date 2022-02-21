/*
 * utility.cpp
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

#include "utility.h"
#include <iostream>
#include <string>
#include <cmath>

string toUpperCase(string original) {
    int size = original.size();
      int i = 0;
      for (i = 0; i < size; ++i){
        if (original.at(i) > 96 && original.at(i) < 123){
          original.at(i) = original.at(i) - 32;
        }
      }
      return original;
}

string removeNonAlphas(string original) {
    int size = original.size();
         int i = 0;
        string final;
         for (i = 0; i < size; ++i){
           if (((original.at(i) >= 65) && (original.at(i) <= 90) ||
                (original.at(i) >= 97) && (original.at(i) <= 122))){
             final += original.at(i);
           }
               }
      return final;
        }

string removeDuplicate(string original) {
        int size = original.size();
            int i = 0;
             bool duplicate;
             char str[size];
    for (i = 0; i < size; ++i){
        str[i] = '#';
    }
             int temp;
             string fixed;
             int j = 0;
             for (i = 0; i < size; ++i){
               temp = original.at(i);
               duplicate = false;
               for (j = 0; j < size; ++j){
                   if (temp == str[j]){
                  duplicate = true;
                }
               }
               if (duplicate == false){
                 fixed += original.at(i);
                 str[i] = original.at(i);
             }
             }
             return fixed;
    
}

int charToInt(char original){
  int value;
  value = original - 48;
  return value;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
