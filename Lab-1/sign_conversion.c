#include <stdio.h>

int main() {
    int signed_value = -10;
    // int can store both signed and unsigned values so we can put -10 in it 
    unsigned int unsigned_value = signed_value;
    // but if unsigned we have to convert it into unsigned version using 2's complement or any other method
    printf("Signed value: %d\n", signed_value);
    printf("After sign conversion: %u\n", unsigned_value);

    return 0;
}
