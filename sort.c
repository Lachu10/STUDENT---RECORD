#include <stdio.h>
#include <string.h>
#include "student.h"

void sort(void) {
    if (!head || !head->next) {
        printf("Not enough records to sort.\n");
        return;
    }
    char ch;
    printf("N/n : Sort by Name\nP/p : Sort by Percentage\nEnter Choice: ");
    scanf(" %c", &ch);

    int swapped;
    do {
        swapped = 0;
        Student* t = head;
        while (t->next) {
            int cond = (ch == 'N' || ch == 'n') ? 
                       (strcmp(t->name, t->next->name) > 0) : 
                       (t->percentage < t->next->percentage);
            if (cond) {
                // Swap data fields in place
                int r = t->roll_no;
                char n[50];
                strcpy(n, t->name);
                float p = t->percentage;

                t->roll_no = t->next->roll_no;
                strcpy(t->name, t->next->name);
                t->percentage = t->next->percentage;

                t->next->roll_no = r;
                strcpy(t->next->name, n);
                t->next->percentage = p;
                swapped = 1;
            }
            t = t->next;
        }
    } while (swapped);
    printf("List sorted successfully.\n");
}
