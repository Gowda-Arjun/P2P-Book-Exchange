/**
 * File structure:
 * 
 * All the books in the marketplace are stored in books.csv (called `dataFile`)
 * Any new book is added to it.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include "data.h"



FILE* dataFile;


// If the file does not exist, create it and put the csv header row.
void initFile () {

    dataFile = fopen("./books.csv", "r");

    if (dataFile == NULL) {
        dataFile = fopen("./books.csv", "w");
        fputs("Student ID, Book ID\n", dataFile);
    }
    else {
        fclose(dataFile);
    };
}


Book* readBooks() {
    // TODO
    FILE* dataFile = fopen("./books.csv", "r");
}


void storeBook (Book b) {
    
    dataFile = fopen("./books.csv", "a");
    fprintf(dataFile, "%d,%d\n", b.studentId, b.bookId);
    fclose(dataFile);

}


void finishIO () {

    fclose(dataFile);

}
