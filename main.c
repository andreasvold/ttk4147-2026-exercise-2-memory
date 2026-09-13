#include <stdio.h>
#include "array.h"

int main() {
    // task C

    Array arr = array_new(10);

    for(int i  = 1; i < 19; i++){
        array_insertBack(&arr,i);
    }
    array_print(arr);
    getchar();

    return 0;
}