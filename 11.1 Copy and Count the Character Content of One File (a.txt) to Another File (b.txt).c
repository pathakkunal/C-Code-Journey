#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char c;
    int count = 0;

    // Open source file a.txt for reading
    sourceFile = fopen("a.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file b.txt for writing
    destFile = fopen("b.txt", "w");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read each character from source file and write it to destination file
    while ((c = fgetc(sourceFile)) != EOF) {
        fputc(c, destFile);
        count++;
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    // Output the total number of characters copied
    printf("Number of characters copied: %d\n", count);

    return 0;
}
