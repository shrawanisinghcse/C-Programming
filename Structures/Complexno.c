#include<stdio.h>

struct complex{
    int real;
    int imaginary;
};
int main() {
    
    struct complex no1;
    struct complex *ptr = &no1;
    printf("Enter real part : ");
    scanf("%d", &ptr-> real);
    printf("Enter imaginary part : ");
    scanf("%d", &ptr->imaginary);

    printf("%d + %di is the complex  number", ptr->real, ptr-> imaginary);
    return 0;
}