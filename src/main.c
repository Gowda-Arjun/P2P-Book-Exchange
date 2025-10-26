#include <stdio.h>

#include "data.c"
#include "io.c"
#include "ui.c"

// Cows no longer say just Moo
int main () {

    printf(" --- Moooo! Welcome to P2P Book Exchange --- \n");

    // Some books are added here in a hardcoded way just to test display function.
    Book* listings = NULL, *requests = NULL;
    insertBook(&listings, createBook(456, 123));
    insertBook(&listings, createBook(567, 234));
    insertBook(&listings, createBook(567, 969));
    insertBook(&listings, createBook(167, 696));

    int opCode;

    do {
        opCode = showMainMenu();
        clearScreen();

        switch (opCode) {
            case 1:
                printf(" Current listings:\n");
                displayBooks(listings);
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
