#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

void delete_rec(void) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }

    char ch;
    printf("R/r : Delete using Roll Number\nN/n : Delete using Name\nEnter Choice: ");
    scanf(" %c", &ch);

    int roll = 0;
    if (ch == 'R' || ch == 'r') {
        printf("Enter Roll Number to delete: ");
        scanf("%d", &roll);
    } else if (ch == 'N' || ch == 'n') {
        char name[50];
        printf("Enter Name to search: ");
        scanf("%s", name);

        Student* t = head;
        int found = 0;
        printf("\nMatching Records:\n");
        while (t) {
            if (strcmp(t->name, name) == 0) {
                printf("Roll No: %d, Name: %s, Percentage: %.1f\n", t->roll_no, t->name, t->percentage);
                found = 1;
            }
            t = t->next;
        }

        if (!found) {
            printf("No matching records found.\n");
            return;
        }
        printf("Enter Roll Number of the record to delete from above: ");
        scanf("%d", &roll);
    }

    Student *t = head, *prev = NULL;
    while (t) {
        if (t->roll_no == roll) {
            if (!prev) head = t->next;
            else prev->next = t->next;
            free(t);
            printf("Record deleted successfully.\n");
            return;
        }
        prev = t;
        t = t->next;
    }
    printf("Record not found.\n");
}
