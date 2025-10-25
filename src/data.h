#include <stdio.h>
#include <stdlib.h>

#ifndef DATA_H
#define DATA_H


typedef struct books
{
    int studentId, bookId;
    struct books* next;

} Book;

typedef struct req
{
    int studentId, bookId;
    struct req* next;

} requests;


#endif