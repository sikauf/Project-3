/*
 * vigenere.cpp
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

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include <iostream>
#include <string>
#include <cctype>


string vigenereCipher(string original, string keyword, bool encrypt){
   
    int originalSize = original.size();
    keyword = removeNonAlphas(keyword);
    keyword = toUpperCase(keyword);
    keyword += " ";
    int keywordSize = keyword.size();
    string updatedKeyword;
    string output;
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i <= originalSize + 1; ++i){
        if (original.at(i) != 32){
            if (isalpha(original.at(i)) != 0){
            if (keyword.at(j) != 32){
                updatedKeyword += keyword.at(j);
                ++j;
            } else {
                j = 0;
                --i;
                --originalSize;
            }
            } else {
            updatedKeyword += " ";
            }
        } else {
            updatedKeyword += " ";
        }
        }
    int updatedKeySize = updatedKeyword.size();
    for (i = 0; i < updatedKeySize; ++i){
        if (original.at(i) != 32){
            if (isalpha(original.at(i)) != 0){
        int value = updatedKeyword.at(i) - 65;
                if (encrypt == true){
        output += shiftAlphaCharacter(original.at(i), value);
                } else {
        output += shiftAlphaCharacter(original.at(i), (value * -1));
                }
            } else {
                output += original.at(i);
            }
        } else {
            output += " ";
        }
    }
    return output;
}
