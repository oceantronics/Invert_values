#include <stdio.h>
#include <stddef.h>

void invert(int *values, size_t values_size);

int main() {

    int size = 5;
    int values[] = {1, 2, 3, 4, 5};
    invert(values, size);

    for (int i = 0; i < size; ++i) {
        printf("%d  ", values[i]);
    }

    return 0;
}

void invert(int *values, size_t values_size){

    for (int i = 0; i < values_size; ++i) {
        values[i] *= -1;
    }
}