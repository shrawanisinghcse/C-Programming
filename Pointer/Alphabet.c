#include<stdio.h>

int main() {
   
    char ch;
char *p = &ch;

for (*p = 'A'; *p <= 'Z'; (*p)++)
{
    printf("%c \n", *p);
}

    return 0;
}