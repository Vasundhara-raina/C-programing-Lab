#include <stdio.h>

int main() {
    // Writing to a file
    FILE *writeFile = fopen("example.txt", "w");

    if (writeFile == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(writeFile, "Hello, this is a sample text written to a file.\n");
    fprintf(writeFile, "You can add more lines as needed.\n");

    fclose(writeFile);

    // Reading from the file
    FILE *readFile = fopen("example.txt", "r");

    if (readFile == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Reading from the file:\n");

    char buffer[100]; // Adjust the buffer size as needed

    while (fgets(buffer, sizeof(buffer), readFile) != NULL) {
        printf("%s", buffer);
    }

    fclose(readFile);

    return 0;
}