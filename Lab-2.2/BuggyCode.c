#include <stdio.h>
#include <stdlib.h>

int main() {

    int *num = (int *)malloc(sizeof(int));

    *num = 100;

    printf("Value: %d\n", *num);

    free(num);

    printf("After free: %d\n", *num);   // Bug 1: Use-after-free
    // HERE WE ARE Accessing num after freeing it's memory allocation which cause problem of Use-after-free

    free(num);                          // Bug 2: Double free
    // Here we are again freeing num it's memory we are again freeing it which cause problem of Double free

    int *arr = (int *)malloc(5 * sizeof(int));

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Array value: %d\n", arr[0]);

    free(arr);

    return 0;
}