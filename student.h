#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student {
    int roll_no;
    char name[50];
    float percentage;
    struct Student* next;
} Student;

extern Student* head;

void add(void);
void delete_rec(void);
void show(void);
void save(void);
void load(void);
void exit_prog(void);
void delall(void);
void modify(void);
void sort(void);
void reverse(void);

#endif
