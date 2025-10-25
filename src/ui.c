#include <stdio.h>


int showMainMenu () {
    int opCode = 5;
    printf(
        "+--------------------------+"
        "|  1) Show listings        |"
        "|  2) Add book listing     |"
        "|  3) Add book request     |"
        "|  4) Check for matches    |"
        "|  5) Exit                 |"
        "+--------------------------+"
        "Enter your choice: "
    );

    scanf("%d", &opCode);
    return opCode;
}