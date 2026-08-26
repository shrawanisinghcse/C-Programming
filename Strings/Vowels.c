#include<stdio.h>

void vowel(char arr[]);

int main() {

    char Vowel[] = "Well well, I am writing anything right now just to program so yeah, I guess that is enough now.";

    vowel(Vowel);

    return 0;
}

void vowel(char arr[]) {
    int count = 0;
    for(int i = 0;arr[i] != '\0'; i++) {
        if(arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++ ;
        }
    }
    printf("No. of vowels : %d", count);
}

