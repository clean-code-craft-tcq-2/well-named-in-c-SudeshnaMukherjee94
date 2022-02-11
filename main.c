#include <stdio.h>
#include <assert.h>
#include "ColorsDefinition.c"
#include "FormColorPair.c"
#include "ColorPairFromPairNumber.c"
#include "PairNumberFromColorPair.c"
#include "TestSpec.c"
    
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
