#include <stdio.h>
#include <string.h>
#include <math.h>

void decimal_to_binary(int n);
void binary_to_decimal(char *binary);

/*
Team 1: Main function
Requirements:
    - Depending on whether the user entered 1 or 2, prompt them to enter a decimal or binary
    - Check if decimal valid (0-255)/binary valid (8-bit binary number), otherwise `return 1;`
    - If valid inputs call `decimal_to_binary(int n)` or `binary_to_decimal(char *binary)`
Notes:
    - `strspn(binary, "01")` returns the number of valid chars (0 or 1) in `binary`
*/
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
        // Enter code here

    } else if (choice == 2) {
        printf("Enter an 8-bit binary number (e.g., 00000001): ");
        // Enter code here

    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

/*
Team 2: Function to convert decimal to binary
Requirements:
    - Convert the decimal value stored in `n` to binary, stored in `binary[]`
Notes:
    - `binary[9]` for 8 bits + null terminator, binary goes in [0] - [7]
*/
void decimal_to_binary(int n) {
    char binary[9] = {0};
    // Enter code here

    printf("Binary representation: %s\n", binary);
}

/*
Team 3: Function to convert binary to decimal
Requirements:
    - Convert the 8-bit binary value stored in `*binary` to decimal, stored in `decimal`
Notes:
    - `pow(2, something)` returns the value 2^something
*/
void binary_to_decimal(char *binary) {
    int decimal = 0;
    // Enter code here

    printf("Decimal representation: %d\n", decimal);
}
