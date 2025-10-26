#include <stdio.h>

#include "data.h"
#include "io.c"
#include "ui.c"

// Cows no longer say just Moo
int main () {

    printf(" --- Moooo! Welcome to P2P Book Exchange --- \n");

    // Some testing code, ignore
    initFile();

    Book x = {123, 456};
    storeBook(x);

    int opCode;

    do {
        opCode = showMainMenu();
        switch (opCode) {
            case 1:
                // TODO: Show listings
                printf(" Current listings:\n");
                break;
            case 2:
                // TODO: Add book listing
                printf(" Add book listing:\n");
                break;
            case 3:
                // TODO: Add book request
                printf(" Add book request:\n");
                break;
            case 4:
                // TODO: Check for matches
                printf(" Check for matches:\n");
                break;
            case 5:
                printf("Goodbye!\n");
                exit(0);
                break;
            default:
                printf("Hmm... that option doesn't exist yet, try again!\n");
        }
    } while (opCode != 5);

    return 0;
}
