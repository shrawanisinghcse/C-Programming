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

    printf("Student name = %s \n Student roll no = %d \n Student CGPA = %f \n \n", s1.name, s1.roll, s1.cgpa);

    struct student s2;
    strcpy(s2.name, "Caroline");
    s2.roll = 4670;
    s2.cgpa = 7.8;

    printf("Student name = %s \n Student roll no = %d \n Student CGPA = %f \n \n", s2.name, s2.roll, s2.cgpa);

    struct student s3;
    strcpy(s3.name, "Emily");
    s3.roll = 4675;
    s3.cgpa = 8.7;

    printf("Student name = %s \n Student roll no = %d \n Student CGPA = %f \n \n", s3.name, s3.roll, s3.cgpa);

    return 0;
}