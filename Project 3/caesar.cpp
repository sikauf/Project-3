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
#include <cctype>
#include <string>

char shiftAlphaCharacter(char c, int n){
    if (isupper(c)){
        int value = n % 26;
            c = c + value;
          if (c > 90){
            c -= 26;
          } else if (c < 65){
            c += 26;
          }
            return c;
    } else if (islower(c)){
        int value = n % 26;
            c = c + value;
          if (c > 122){
            c -= 26;
          } else if (c < 97){
            c += 26;
          }
            return c;
        }
    return c;
}

string caesarCipher(string original, int key, bool encrypt){
    if (encrypt == false){
        key *= -1;
    }
    int size = original.size();
      char str[size];
      int i = 0;
      for (i = 0; i < size; ++i){
      str[i] = original.at(i);
    }
      for (i = 0; i < size; ++i){
        if (original.at(i) != 32){
        original.at(i) = shiftAlphaCharacter(original.at(i), key);
        }
      }
      return original;
    }
    
