#include <stdio.h>

#include "data.h"
#include "io.c"


// Cows Say Moo
int main () {

    printf("Moooo\n");

    // Some testing code, ignore
    initFile();

    Book x = {123, 456};
    storeBook(x);

    return 0;
}
