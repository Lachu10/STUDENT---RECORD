#include <stdio.h>
#include "student.h"

void reverse(void) {
    if (!head || !head->next) {
        printf("List reversed successfully.\n");
        return;
    }
    Student* prev = NULL;
    Student* current = head;
    Student* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    printf("List reversed successfully.\n");
}
