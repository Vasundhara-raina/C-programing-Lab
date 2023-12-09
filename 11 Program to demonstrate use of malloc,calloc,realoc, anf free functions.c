#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc to allocate memory for an array of integers
    int *arr_malloc = (int *)malloc(5 * sizeof(int));

    if (arr_malloc == NULL) {
        printf("Memory allocation failed for arr_malloc\n");
        return 1;
    }

    // Initializing the allocated memory
    for (int i = 0; i < 5; ++i) {
        arr_malloc[i] = i + 1;
    }

    // Printing the values
    printf("malloc: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr_malloc[i]);
    }
    printf("\n");

    // Using calloc to allocate memory for an array of floats
    float *arr_calloc = (float *)calloc(3, sizeof(float));

    if (arr_calloc == NULL) {
        printf("Memory allocation failed for arr_calloc\n");
        free(arr_malloc); // Freeing previously allocated memory
        return 1;
    }

    // Printing the values (should be initialized to 0.0)
    printf("calloc: ");
    for (int i = 0; i < 3; ++i) {
        printf("%.1f ", arr_calloc[i]);
    }
    printf("\n");

    // Using realloc to resize the previously allocated memory
    int *arr_realloc = (int *)realloc(arr_malloc, 8 * sizeof(int));

    if (arr_realloc == NULL) {
        printf("Memory reallocation failed for arr_realloc\n");
        free(arr_malloc); // Freeing previously allocated memory
        free(arr_calloc); // Freeing previously allocated memory
        return 1;
    }

    // Initializing the additional memory
    for (int i = 5; i < 8; ++i) {
        arr_realloc[i] = i + 1;
    }

    // Printing the values after realloc
    printf("realloc: ");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr_realloc[i]);
    }
    printf("\n");

    // Freeing allocated memory
    free(arr_realloc);
    free(arr_calloc);

    return 0;
}