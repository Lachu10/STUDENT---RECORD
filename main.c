#include <stdio.h>
#include "student.h"

Student* head = NULL;

int main(void) {
    load();
    char ch;
    while (1) {
        printf("\n**** STUDENT RECORD MENU ****\n");
        printf("A/a : Add New Record\n");
        printf("D/d : Delete a Record\n");
        printf("S/s : Show the List\n");
        printf("M/m : Modify a Record\n");
        printf("V/v : Save\n");
        printf("T/t : Sort the List\n");
        printf("R/r : Reverse the List\n");
        printf("E/e : Exit\n");
        printf("Enter Your Choice: ");
        scanf(" %c", &ch);

        if (ch == 'A' || ch == 'a') add();
        else if (ch == 'D' || ch == 'd') delete_rec();
        else if (ch == 'S' || ch == 's') show();
        else if (ch == 'M' || ch == 'm') modify();
        else if (ch == 'V' || ch == 'v') save();
        else if (ch == 'T' || ch == 't') sort();
        else if (ch == 'R' || ch == 'r') reverse();
        else if (ch == 'E' || ch == 'e') exit_prog();
    }
    return 0;
}
