//
// Created by oumar on 19/05/2022.
//

#include "ShowHugeNumber.h"
4void printHugeFloat (const HugeFloat* hugeFloat) {
    char* hugeFloatString = HugeFloatToString (hugeFloat);
    printf ("%s\n", hugeFloatString);
    free (hugeFloatString);
}
