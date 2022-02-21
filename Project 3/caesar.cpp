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
    } else {
        int value = n % 26;
            c -= 26;
            c = c + value;
          if (c > 122){
            c -= 26;
          } else if (c < 97){
              if (c < 71 ){
                  c += 26;
              }
            c += 26;
          }
        return c;
    }
}
    
string caesarCipher(string original, int key, bool encrypt){
    if (encrypt == false){
        key *= -1;
    }
    int size = original.size();
      int i = 0;
      for (i = 0; i < size; ++i){
          if (isalpha(original.at(i)) != 0){
        if (original.at(i) != 32){
        original.at(i) = shiftAlphaCharacter(original.at(i), key);
        }
      }
      }
      return original;
    }
    
