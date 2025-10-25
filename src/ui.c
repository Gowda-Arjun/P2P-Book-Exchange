#include <stdio.h>


int showMainMenu () {
    int opCode = 5;
    printf(
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