#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows); //Number of rows input

    if (rows<= 0||rows >= 25) {
        printf("Invalid input. Number of rows should be between 0 and 25.\n"); //Checking if number of rows in between 0 and 25
        return 0;
    }

    for (i = 1; i<=rows; i++) {
        
        for (space = 1; space <= rows-i; space++) {
            printf("  "); //Printing Space
        }

        for (j =1; j <= 2*i-1; j++) {
            printf("* ");  //Printing Asterisk
        }

        printf("\n");
    }

    return 0;
}
