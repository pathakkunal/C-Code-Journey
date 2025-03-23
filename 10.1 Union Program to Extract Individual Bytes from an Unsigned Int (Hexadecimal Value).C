#include <stdio.h>

union ByteExtractor {
    unsigned int value;
    unsigned char bytes[sizeof(unsigned int)];
};

void printBytes(unsigned int number) {
    union ByteExtractor extractor;
    extractor.value = number;

    printf("Hexadecimal: 0x%X\n", number);
    printf("Individual Bytes:\n");

    for (int i = 0; i < sizeof(unsigned int); i++) {
        printf("Byte %d: 0x%X\n", i, extractor.bytes[i]);
    }
}

int main() {
    unsigned int hexValue;
    printf("Enter a hexadecimal value: ");
    scanf("%x", &hexValue);

    printBytes(hexValue);

    return 0;
}
