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
    cout << "Expected: f, Actual: " << shiftAlphaCharacter('b', 56) << endl;
    cout << "Expected: D, Actual: " << shiftAlphaCharacter('T', -42) << endl;
    cout << "Expected: g, Actual: " << shiftAlphaCharacter('z', 7) << endl;
    cout << "Expected: F, Actual: " << shiftAlphaCharacter('Y', 7) << endl;
}

void testToUpperCase(){
    cout << "Expected: APPLE, actual " << toUpperCase("apple") << endl;
    cout << "Expected: JOHN?!, actual " << toUpperCase("john?!") << endl;
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
    cout << "Expected: Zht huk Qhylk, actual " << caesarCipher("Sam and Jared", 7, true) << endl;
    cout << "Expected: Let's grab pizza?, actual " << caesarCipher("Buj'i whqr fyppq?", 42, false) << endl;
}

void testMixKey(){
    cout << endl << mixKey("JELLY") << endl;
}

void testFillGrid(){
    char grid[SIZE][SIZE];
    fillGrid(grid, ALNUM);
    printGrid(grid);
}

void testFindInGrid(){
    char grid[SIZE][SIZE];
    fillGrid(grid, ALNUM);
    cout << "Expected: 21, actual " << findInGrid('N', grid) << endl;
}

void testPolybiusSquare(){
    char grid[SIZE][SIZE];
    cout << polybiusSquare(grid, "POLYBIUS", "15151311 435445 0511 332215 04151133", false) << endl;
}

void startTests(){
    testShiftAlphaCharacter();
    testToUpperCase();
    testRemoveNonAlphas();
    testRemoveDuplicate();
    testCharToInt();
    testCaesarCipher();
    testMixKey();
    testFillGrid();
    testFindInGrid();
    testPolybiusSquare();
}

