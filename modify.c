#include <stdio.h>
#include <string.h>
#include "student.h"

void modify(void) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }

    char ch;
    printf("R/r : Roll Number\nN/n : Name\nP/p : Percentage\nEnter Choice: ");
    scanf(" %c", &ch);

    int roll = 0;
    if (ch == 'R' || ch == 'r') {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
    } else {
        Student* t = head;
        int found = 0;
        if (ch == 'N' || ch == 'n') {
            char name[50];
            printf("Enter Name to search: ");
            scanf("%s", name);
            while (t) {
                if (strcmp(t->name, name) == 0) {
                    printf("Roll No: %d, Name: %s, Percentage: %.1f\n", t->roll_no, t->name, t->percentage);
                    found = 1;
                }
                t = t->next;
            }
        } else {
            float pct;
            printf("Enter Percentage to search: ");
            scanf("%f", &pct);
            while (t) {
                if (t->percentage == pct) {
                    printf("Roll No: %d, Name: %s, Percentage: %.1f\n", t->roll_no, t->name, t->percentage);
                    found = 1;
                }
                t = t->next;
            }
        }
        if (!found) {
            printf("No matching records found.\n");
            return;
        }
        printf("Enter Roll Number of the record to modify: ");
        scanf("%d", &roll);
    }

    Student* t = head;
    while (t && t->roll_no != roll) t = t->next;
    if (!t) {
        printf("Record not found.\n");
        return;
    }

    printf("\nModify Field:\nN/n : Name\nP/p : Percentage\nEnter Choice: ");
    scanf(" %c", &ch);
    if (ch == 'N' || ch == 'n') {
        printf("Enter New Name: ");
        scanf("%s", t->name);
    } else {
        printf("Enter New Percentage: ");
        scanf("%f", &t->percentage);
    }
    printf("Record modified successfully.\n");
}
