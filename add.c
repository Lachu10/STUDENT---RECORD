#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void add(void) {
    Student* n = (Student*)malloc(sizeof(Student));
    if (!n) return;

    int roll = 1;
    while (1) {
        Student* t = head;
        while (t && t->roll_no != roll) t = t->next;
        if (!t) break;
        roll++;
    }

    n->roll_no = roll;
    n->next = NULL;

    printf("Enter Student Name and Percentage: ");
    scanf("%s %f", n->name, &n->percentage);

    if (!head) {
        head = n;
    } else {
        Student* t = head;
        while (t->next) t = t->next;
        t->next = n;
    }
    printf("Record added successfully! Roll No: %d\n", roll);
}
