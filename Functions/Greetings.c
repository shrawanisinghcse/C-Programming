#include<stdio.h>

void printbonjour();
void printnamaste();

int main() {

    char c;
    printf("Indian or French?");
    scanf("%c", &c);

    if(c == 'I') {
        printnamaste();
    }
    else {
        printbonjour();
    }

    return 0;
    }

    void printnamaste() {
        printf("Namaste!");
    }

    void printbonjour() {
        printf("Bonjour!");
    }
