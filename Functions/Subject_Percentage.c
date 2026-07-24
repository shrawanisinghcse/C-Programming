#include<stdio.h>

float Percentage(int MMarks,int ScMarks, int SMarks);

int main() {

    int MMarks;
    printf("Enter your score in mathematics(out of 100) : ");
    scanf("%d", &MMarks);

    int ScMarks;
    printf("Enter your score in science(out of 100) : ");
    scanf("%d", &ScMarks);

    int SMarks;
    printf("Enter your score in Sanskrit(out of 100) : ");
    scanf("%d", &SMarks);

    Percentage(MMarks,ScMarks,SMarks);
    printf("%f", Percentage(MMarks,ScMarks,SMarks));

return 0;
}

float Percentage(int MMarks, int ScMarks, int SMarks) {
    return (MMarks+ScMarks+SMarks)/3.0;
}