#include <stdio.h>
#include <limits.h>

int main(){
    unsigned int value = UINT_MAX;  // we are taking max Integer value
    printf("Before overflow: %u\n", value);
    value = value + 1; 
// if we increase value with 1 then it overflows limit of usigned int so value turns to 0
// which prevents overflow
    printf("After overflow: %u\n", value);
    return 0;
}