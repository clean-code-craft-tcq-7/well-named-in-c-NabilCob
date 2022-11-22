
#include <stdio.h>
#include <assert.h>
#include "Evencountcolorpattern.h"
#include "TestFunctions.h"

//Variable to hold the size of the array to print colour pattern
const int MAX_COLORPAIR_NAME_CHARS = 16;

/*
 * To test the colour pattern against the pair number
 * Assert on mismatch
 * \Param : Pair number -> Given
 * \Param : Major color -> Expected
 * \Param : Minor color -> Expected
 * \returns : void
 */
void testNumberToPair(int pairNumber, ten_MajorColor expectedMajor, ten_MinorColor expectedMinor)
{
    tst_ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
/*
 * To test the pair number against the colour pattern
 * Assert on mismatch
 * \Param : Major color - Given
 * \Param : Minor color - Given
 * \Param : Pair number - Expected
 * \returns : void
 */
void testPairToNumber(ten_MajorColor major,  ten_MinorColor minor, int expectedPairNumber)
{
    tst_ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
