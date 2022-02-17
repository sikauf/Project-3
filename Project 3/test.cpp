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

using namespace std;

void testAlphaShiftCharacter(){
    //TO DO IMPLEMENT
}

void testToUpperCase(){
    cout << "Expected: APPLE, actual " << toUpperCase("apple") << endl;
    cout << "Expected: JOHN?!, actual " << toUpperCase("john?!") << endl;
}

void startTests(){
    testAlphaShiftCharacter();
    testToUpperCase();
}

