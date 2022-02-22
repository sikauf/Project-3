/*
 * ciphers.cpp
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
#include "polybius.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char getCipherChoice();
bool getEncryptChoice();
string runCaesar(bool encrypt);
string runVigenere(bool encrypt);
string runPolybius(bool encrypt);

void ciphers(){
    char cipherChoice = getCipherChoice();
    bool encryptChoice = getEncryptChoice();
    string output;
    if (cipherChoice == 'C'){
      output = runCaesar(encryptChoice);
    } else if (cipherChoice == 'V'){
        output = runVigenere(encryptChoice);
    } else {
        output = runPolybius(encryptChoice);
    }
    cout << output;
}


char getCipherChoice(){
    string cipherChoice;
    char cipher;
    cout << "Choose a cipher (Caesar, Vigenere, or Polybius): ";
    cin >> cipherChoice;
    cipherChoice = toUpperCase(cipherChoice);
    if (cipherChoice != "C" && cipherChoice != "V" && cipherChoice != "P" && cipherChoice != "CAESAR" && cipherChoice != "VIGENERE" && cipherChoice != "POLYBIUS"){
        cout << endl << "Invalid cipher!" << endl;
    }
    if (cipherChoice == "C" || cipherChoice == "CAESAR"){
        cipher = 'C';
    } else if (cipherChoice == "V" || cipherChoice == "VIGENERE"){
        cipher = 'V';
    } else {
        cipher = 'P';
    }
    return cipher;
}

 bool getEncryptChoice(){
     string encryptChoice;
     char mode;
     cout << "Encrypt or decrypt: ";
     cin >> encryptChoice;
     encryptChoice = toUpperCase(encryptChoice);
     if (encryptChoice != "ENCRYPT" && encryptChoice != "DECRYPT"
         && encryptChoice != "D" && encryptChoice != "E"){
         cout << "Invalid mode!" << endl;
     }
     if (encryptChoice == "E" || encryptChoice == "ENCRYPT"){
         mode = true;
     } else {
         mode = false;
     }
     return mode;
    }
    
  string runCaesar(bool encrypt){
      string message;
      cout << "Enter a message: ";
      cin.ignore();
      getline(cin, message);
      int key;
      cout << "What is your key: ";
      cin >> key;
      string output;
      output = caesarCipher(message, key, encrypt);
      if (encrypt){
          cout << "The encrypted message is: ";
      } else {
          cout << "The decrypted message is: ";
      }
      return output;
}

string runVigenere(bool encrypt){
    string output;
    string message;
    cout << "Enter a message: ";
    cin.ignore();
    getline(cin, message);
    string key;
    cout << "What is your key: ";
    getline(cin, key);
    output = vigenereCipher(message, key, encrypt);
    if (encrypt){
        cout << "The encrypted message is: ";
    } else {
        cout << "The decrypted message is: ";
    }
    return output;
}

string runPolybius(bool encrypt){
    string output;
    string message;
    cout << "Enter a message: ";
    cin.ignore();
    getline(cin, message);
    int size = message.size();
    int i = 0;
    for (i = 0; i < size; ++i){
        /*if (isalpha(message.at(i)) == 0 && isdigit(message.at(i)) == 0 && message.at(i) != 0){
            return "Invalid message!";
        }*/
    }
    string key;
    cout << "What is your key: ";
    getline(cin, key);
    key = toUpperCase(key);
    key = removeDuplicate(key);
    char grid[SIZE][SIZE];
    output = polybiusSquare(grid, key, message, encrypt);
    if (encrypt){
        cout << "The encrypted message is: ";
    } else {
        cout << "The decrypted message is: ";
    }
    return output;
}
