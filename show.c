#include <stdio.h>
#include "student.h"

void show(void) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }
    printf("--------------------------------------\n");
    printf("Roll No     Name         Percentage\n");
    printf("--------------------------------------\n");
    Student* t = head;
    while (t) {
        printf("%-12d%-13s%.1f\n", t->roll_no, t->name, t->percentage);
        t = t->next;
    }
    printf("--------------------------------------\n");
}
