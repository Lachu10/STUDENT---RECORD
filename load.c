#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void load(void) {
    FILE* fp = fopen("student.dat", "r");
    if (!fp) return;

    // Call delall to clear any existing list memory before loading
    delall();

    Student* tail = NULL;
    int roll;
    char name[50];
    float pct;

    while (fscanf(fp, "%d %s %f", &roll, name, &pct) == 3) {
        Student* n = (Student*)malloc(sizeof(Student));
        if (!n) {
            fclose(fp);
            return;
        }
        n->roll_no = roll;
        sprintf(n->name, "%s", name);
        n->percentage = pct;
        n->next = NULL;

        if (!head) head = n;
        else tail->next = n;
        tail = n;
    }
    fclose(fp);
}
