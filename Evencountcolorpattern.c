#include <stdio.h>
#include"Evencountcolorpattern.h"

//Variable declaration for Major and Minor Color
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

//Variable declaration for major and minor color supported
int numberOfMajorColors =  sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors =  sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

/*
 * Function to store the color in string format
 * \Param : color pattern
 * \Param : pointer to string array
 * \returns : void
 */

void ColorPairToString(const tst_ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

/*
 * Function to get the major and minor color from pair number
 * \Param : Pair number
 * \returns : Color pattern
 */

tst_ColorPair GetColorFromPairNumber(int pairNumber) {
    tst_ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (ten_MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (ten_MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/*
 * Function to get the major and minor color from pair number
 * \Param : Color pattern
 * \returns : Pair number
 */
int GetPairNumberFromColor(const tst_ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}



