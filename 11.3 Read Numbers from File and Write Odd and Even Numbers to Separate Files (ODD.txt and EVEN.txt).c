#include <stdio.h>

int main() {
    FILE *inputFile, *oddFile, *evenFile;
    int num;

    // Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open ODD.txt for writing
    oddFile = fopen("ODD.txt", "w");
    if (oddFile == NULL) {
        printf("Error opening ODD.txt.\n");
        fclose(inputFile);
        return 1;
    }

    // Open EVEN.txt for writing
    evenFile = fopen("EVEN.txt", "w");
    if (evenFile == NULL) {
        printf("Error opening EVEN.txt.\n");
        fclose(inputFile);
        fclose(oddFile);
        return 1;
    }

    // Read numbers from input file and write them to respective files based on odd/even
    while (fscanf(inputFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close all files
    fclose(inputFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Odd and Even numbers written to ODD.txt and EVEN.txt.\n");

    return 0;
}
