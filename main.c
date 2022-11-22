#include "Evencountcolorpattern.h"
#include "TestFunctions.h"

/*
 *Req - The color coding needs to be printed as a reference manual for wiring personnel.
 *This manual is a mapping from the color-names to the corresponding numbers.
 *Add a function that would format the color coding in a form that someone can print.
 * */
int main(void) {

    //Test given pair number matches the color pattern
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    //Test given colour pattern matches the pair number
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}


