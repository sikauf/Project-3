//
//  test.cpp
//  Project 3
//
//  Created by Sam Kaufman on 2/17/22.
//

#include "polybius.h"
#include "caesar.h"
#include "utility.h"
#include "vigenere.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void testShiftAlphaCharacter(){
    cout << "Expected: c, Actual: " << shiftAlphaCharacter('a', 2) << endl;
    cout << "Expected: X, Actual: " << shiftAlphaCharacter('A', -3) << endl;
    
}

void testToUpperCase(){
    cout << "Expected: APPLE, actual " << toUpperCase("apple") << endl;
    cout << "Expected: JOHN?!, actual " << toUpperCase("john?!") << endl;
}

void testRemoveNonAlphas(){
    cout << "Expected: APPLE, actual " << removeNonAlphas(":]APP(*&LE") << endl;
    cout << "Expected: JasonGuy, actual " << removeNonAlphas("Ja:son Gu*y") << endl;
}

void testRemoveDuplicate(){
    cout << "Expected: John, actual " << removeDuplicate("Johnnhn") << endl;
    cout << "Expected: Party, actual " << removeDuplicate("ParatyPartyrrr") << endl;
}

void testCharToInt(){
    cout << "Expected: 3, actual " << charToInt('3') << endl;
    cout << "Expected: 7, actual " << charToInt('7') << endl;
}

void testCaesarCipher(){
    cout << "Expected: Spvuz ahrl ihAoz, actual " << caesarCipher("Lions take baThs", 7, true) << endl;
    cout << "Expected: Mug Liwem!, actual " << caesarCipher("Sam Rocks!", -6, true) << endl;
    cout << "Expected: Let's grab pizza?, actual " << caesarCipher("Buj'i whqr fyppq?", 42, false) << endl;
}


void startTests(){
    testShiftAlphaCharacter();
    testToUpperCase();
    testRemoveNonAlphas();
    testRemoveDuplicate();
    testCharToInt();
    testCaesarCipher();
}

