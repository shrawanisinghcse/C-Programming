#include<stdio.h>

int main() {
    char word[100];
    char ch;
    printf("Enter any word or sentence : ");
    int i = 0;

    while(ch != '\n'){
    scanf("%c", &ch);
    word[i] = ch;
    i++;
    }
    word[i] = '\0';
    puts(word);
}