#include <stdio.h>

int main() {
    int large_value = 300;
    int unused_value = 50; // this value is not used in our actuall code so it can cause vulnerability why is detected by .Wall .Wextra

    unsigned char small_value = large_value;

    int max_value = 2147483647;
    int overflow_value = max_value + 1; // this value can exceed the limit of max_value of int that is why 
    // ubsan is showing error in this code 

    printf("Original value: %d\n", large_value);
    printf("After conversion: %u\n", small_value);
    printf("Overflow value: %d\n", overflow_value);

    return 0;
}

// as there is no memory related problems so no errors 