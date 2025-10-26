#include <stdio.h>
#include <stdlib.h>
#include "data.h"


void clearScreen() {
    system("cls");
}

int showMainMenu () {
    int opCode = 5;
    printf(
        "\n"
        "+--------------------------+\n"
        "|           Menu           |\n"
        "+--------------------------+\n"
        "|  1) Show listings        |\n"
        "|  2) Add book listing     |\n"
        "|  3) Add book request     |\n"
        "|  4) Check for matches    |\n"
        "|  5) Exit                 |\n"
        "+--------------------------+\n"
        "Enter your choice: "
    );

    scanf("%d", &opCode);
    return opCode;
}


void displayBooks (Book* head){

    if (head == NULL) {
        printf("There are no books!\n");
        return;
    }

    Book* temp = head;

    printf(
        "+------------------+------------------+\n"
        "|  Student ID      | Book ID          |\n"
        "+------------------+------------------+\n" 
    );

    while (temp != NULL)
    {
        printf(
            "|%16d  |%16d  |\n" , temp->studentId, temp->bookId
        );
        temp = temp->next;
    }


    printf(
        "+------------------+------------------+\n"
    );
}

int* requestBookInfo () {
    // TODO
}

