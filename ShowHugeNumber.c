//
// Created by oumar on 19/05/2022.
//

#include "ShowHugeNumber.h"

void printHugeFloat (const HugeFloat* hugeFloat) {
    char* hugeFloatString = HugeFloatToString (hugeFloat);
    printf ("%s\n", hugeFloatString);
    free (hugeFloatString);






void printHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt) {
    char* hugeUnsignedIntString = HugeUnsignedIntToString (hugeUnsignedInt);
    printf ("%s\n", hugeUnsignedIntString);
    free (hugeUnsignedIntString);
}
