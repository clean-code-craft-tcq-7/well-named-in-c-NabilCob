/*
 * Header file for macro, enum ,structure and function declaration realated to
 *  even-count color pattern
 * */

#ifndef EVENCOUNTCOLORPATTERN_H_
#define EVENCOUNTCOLORPATTERN_H_

//Enum declaration
//Color codes for Major color
typedef enum {
    WHITE = 0,
    RED,
    BLACK,
    YELLOW,
    VIOLET
}ten_MajorColor;

//Color codes for Minor color
typedef enum {
    BLUE = 0,
    ORANGE,
    GREEN,
    BROWN,
    SLATE
}ten_MinorColor;

//Structure declaration
//Declaration for color pattern
typedef struct {
    ten_MajorColor majorColor;
    ten_MinorColor minorColor;
}tst_ColorPair;

//Function declaration
void ColorPairToString(const tst_ColorPair* colorPair, char* buffer);
tst_ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const tst_ColorPair* colorPair);

#endif



