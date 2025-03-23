#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int num, i;

    // Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read 10 integers from input file and write their squares to output file
    for (i = 0; i < 10; i++) {
        fscanf(inputFile, "%d", &num);
        fprintf(outputFile, "%d\n", num * num);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Squares of numbers written to output.txt\n");

    return 0;
}
