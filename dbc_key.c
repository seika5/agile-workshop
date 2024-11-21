#include <stdio.h>
#include <string.h>
#include <math.h>

void decimal_to_binary(int n);
void binary_to_decimal(char *binary);

// Team 1: Main function to take in user input and call other functions
int main() {
    int choice, decimal;
    char binary[9];

    printf("Decimal-Binary Converter\n");
    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number (0-255): ");
        scanf("%d", &decimal);
        if (decimal < 0 || decimal > 255) {
            printf("Please enter a number between 0 and 255.\n");
            return 1;
        }
        decimal_to_binary(decimal);
    } else if (choice == 2) {
        printf("Enter an 8-bit binary number (e.g., 00000001): ");
        scanf("%s", binary);
        if (strlen(binary) > 8 || strspn(binary, "01") != strlen(binary)) {
            printf("Please enter a valid 8-bit binary number.\n");
            return 1;
        }
        binary_to_decimal(binary);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

// Team 2: Function to convert decimal to binary
void decimal_to_binary(int n) {
    char binary[9] = {0};
    for (int i = 7; i >= 0; i--) {
        binary[i] = (n % 2) ? '1' : '0';
        n /= 2;
    }
    printf("Binary representation: %s\n", binary);
}

// Team 3: Function to convert binary to decimal
void binary_to_decimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    printf("Decimal representation: %d\n", decimal);
}
