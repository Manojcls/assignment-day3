#include <stdio.h>

void copyArray(int* source, int* dest, int size) {
    int i;
    for(i=0; i<size; i++) {
        *(dest+i) = *(source+i);
    }
}

int main() {
    int sourceArray[5] = {1, 2, 3, 4, 5};
    int destArray[5];
    int size = sizeof(sourceArray) / sizeof(int);

    copyArray(sourceArray, destArray, size);

    printf("Elements of source array: ");
    for(int i=0; i<size; i++) {
        printf("%d ", *(sourceArray+i));
    }

    printf("\nElements of destination array: ");
    for(int i=0; i<size; i++) {
        printf("%d ", *(destArray+i));
    }
    
    return 0;
}

