#include <stdio.h>
#include "student.h"

void save(void) {
    FILE* fp = fopen("student.dat", "w");
    if (!fp) return;
    Student* t = head;
    while (t) {
        fprintf(fp, "%d %s %f\n", t->roll_no, t->name, t->percentage);
        t = t->next;
    }
    fclose(fp);
    printf("Records saved successfully.\n");
}
