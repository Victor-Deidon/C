#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VECTOR_SIZE 20
int main(void) {
    int min = 10;
    int max = 100;
    int vector[VECTOR_SIZE] = {0};
    int number = 0;
    int tmp = 0;
    // Set seed (UNIX timestamp of current time)
    srand(time(NULL));
    // Fill array with random numbers
    float array( ){
            for (int num = 0; num < VECTOR_SIZE; num++) {
            number = ((rand() % (max - min)) + min);
            vector[num] = number;
        }

    // Display vector
        for (int i = 0; i < VECTOR_SIZE; i++) {
            printf("%4d", vector[i]);
        }

        printf("\n");
    }
    // Sort the array in Desc. order
    int sor() {
        for (int i = 0; i < VECTOR_SIZE - 1; i++) {
            for (int j = 0; j < VECTOR_SIZE - i - 1; j++) {
                if (vector[j] < vector[j + 1]) {
                    tmp = vector[j + 1];
                    vector[j + 1] = vector[j];
                    vector[j] = tmp;
                }
            }
        }
    // Display vector
        for (int i = 0; i < VECTOR_SIZE; i++) {
            printf("%4d", vector[i]);
        }
        printf("\n");
    }
    // Ask user for a magical number
    float numb() {
        printf("Enter a number: ");
        scanf("%d", &number);

    // Multiply array elements with some number
        for (int i = 0; i < VECTOR_SIZE; i++) {
            printf("%5d", vector[i] * number);
        }
        printf("\n");
        // Display vector (must have the values untouched after sorting)
        for (int i = 0; i < VECTOR_SIZE; i++) {
            printf("%4d", vector[i]);
        }
        printf("\n");
        return 0;
    }
}
