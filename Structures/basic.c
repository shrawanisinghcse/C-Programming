#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1;
    strcpy(s1.name, "Shrawani");
    s1.roll = 4678;
    s1.cgpa = 9.2;

    printf("Student name = %s \n Student roll no = %d \n Student CGPA = %f", s1.name, s1.roll, s1.cgpa);

    return 0;
}