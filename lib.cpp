#include "lib.h"

bool carattere (char &a) {
    if ((a >= 'a') && (a <= 'z')) {
        a = a - ' ';
        return true;
    } else if ((a >= 'A') && (a <= 'Z')) {
        a = a + ' ';
        return true;
    } else {
        return false; }}
