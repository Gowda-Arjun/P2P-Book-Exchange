#include <stdio.h>
#include <stdlib.h>
#include "data.h"



Book* createBook (int studentId, int bookId) {
    Book* book = (Book*) malloc(sizeof(Book));
    book->studentId = studentId;
    book->bookId = bookId;
    book->next = NULL;
    return book;
}


void insertBook (Book** head, Book* book) {

    if (*head == NULL) {
        *head = book;
        return;
    }

    if ((*head)->bookId > book->bookId) {
        book->next = *head;
        *head = book;
        return;
    }

    Book* prev = *head, *curr = (*head)->next;

    while (curr != NULL && curr->bookId < book->bookId)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = book;
    book->next = curr;

}


Book* matchExchange() {
    // TODO
}