#include <stdlib.h>
#include "student.h"

void delall(void) {
    while (head) {
        Student* tmp = head;
        head = head->next;
        free(tmp);
    }
}
