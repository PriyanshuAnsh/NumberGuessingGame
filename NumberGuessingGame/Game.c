#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    const int number = rand() % 10 + 1;

    const int tries = 3;
    int attempt = 0;

    while(attempt < tries) {
        printf("Enter a number between 1 and 10: ");

        int userInput;
        scanf("%d", &userInput);
        if(userInput == number) {
            printf("Congratz! You Won in %d attempts", attempt + 1);

            return 0;
        } else {
            attempt++;
        }
    }


    printf("Alas, You Lost! Better Luck Next Time");
    return -1;
}

