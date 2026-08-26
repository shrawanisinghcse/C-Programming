#include<stdio.h>

void presence(char arr[], char ch);

int main() {

    char sentence[100];
    printf("Enter sentence : ");
    fgets(sentence, 100, stdin);

    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    presence(sentence, ch);

}

void presence(char arr[], char ch) {
    int k = 1;
    for(int i = 0;arr[i] != 0; i++) {
        if(arr[i] == ch) {
            k = 0;
        }
    }
    if(k == 0) {
        printf("%c is present in the sentence", ch);
    }
    else {
        printf("%c is not present in the sentence", ch);
    }

}