#include <stdio.h>

// Function to swap two values using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

// Function to swap two values using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n",a, b);

    // Calling swapByValue function
    swapByValue(a, b);
    printf("After swapByValue function: a = %d, b = %d\n",a, b);

    // Calling swapByReference function
    swapByReference(&a, &b);
    printf("After swapByReference function: a = %d, b = %d\n",a, b);

    return 0;
}