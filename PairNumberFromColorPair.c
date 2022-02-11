#include <stdio.h>
#include "ColorsDefinition.c"

//GET PAIR NUMBER FROM COLOR PAIR

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
