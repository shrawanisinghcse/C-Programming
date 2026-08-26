#include <stdio.h>

typedef struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
} add;

void printadd(add adds[]);

int main() {

    add adds[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter info for person %d:\n", i + 1);

        printf("House No.: ");
        scanf("%d", &adds[i].houseno);

        printf("Block: ");
        scanf("%d", &adds[i].block);

        printf("City: ");
        scanf("%s", adds[i].city);

        printf("State: ");
        scanf("%s", adds[i].state);
    }

    printadd(adds);

    return 0;
}

void printadd(add adds[]) {

    for (int i = 0; i < 5; i++) {
        printf("\nPerson : %d\n", i + 1);
        printf("House No. : %d\n", adds[i].houseno);
        printf("Block : %d\n", adds[i].block);
        printf("City : %s\n", adds[i].city);
        printf("State : %s\n", adds[i].state);
    }
}