#include<stdio.h>
#include<string.h>

//Find the salted form of a password entered by user if the salt is "123" & added at the end.

int main() {

    char pass[50];
    printf("Enter your password : ");
    scanf("%s", &pass);

    char salt[] = "123";

    printf("New password after salting : %s", strcat(pass,salt));
      return 0;
}