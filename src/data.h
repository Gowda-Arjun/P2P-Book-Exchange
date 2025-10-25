#include <stdio.h>
#include <stdlib.h>

// This is a header type file. Data is and function headers are defined here.
// Actual function bodies are implemented in data.c

// This file will be imported multiple times in the project.
// To avoid redeclaration this compiler directive is used.
#ifndef DATA_H
#define DATA_H

typedef struct
{
    int studentId, bookId;

} Listing;

typedef struct
{
    int studentId, bookId

} Request;

#endif