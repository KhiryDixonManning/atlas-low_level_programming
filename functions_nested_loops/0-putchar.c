#include <stdio.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c) {
    return putchar(c); // Assuming _putchar is a wrapper around stdio's putchar
}

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void) {
    char c;

    for (c = 'a'; c <= 'z'; c++) { // Corrected loop condition
        _putchar(c); // Use _putchar function to print characters
    }
    _putchar('\n'); // Print newline after printing the alphabet
}
