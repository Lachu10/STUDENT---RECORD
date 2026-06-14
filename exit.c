#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void exit_prog(void) {
    char ch;
    printf("\nExit Options:\n");
    printf("S/s : Save and Exit\nE/e : Exit Without Saving\nEnter Choice: ");
    scanf(" %c", &ch);

    if (ch == 'S' || ch == 's') {
        save();
        delall();
        exit(0);
    } else if (ch == 'E' || ch == 'e') {
        delall();
        exit(0);
    } else {
        printf("Invalid choice. Returning to menu.\n");
    }
}
