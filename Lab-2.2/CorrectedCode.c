#include <stdio.h>
#include <stdlib.h>

int main() {

    int *num = (int *)malloc(sizeof(int));

    // Check whether memory allocation was successful
    if (num == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *num = 100;

    printf("Value: %d\n", *num);

    free(num);
    num = NULL;   // Avoid dangling pointer

    int *arr = (int *)malloc(5 * sizeof(int));

    // Check whether memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Array value: %d\n", arr[0]);

    free(arr);
    arr = NULL;   // Avoid dangling pointer

    return 0;
}