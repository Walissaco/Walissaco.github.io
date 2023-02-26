#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

