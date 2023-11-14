#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    // Testing _printf with a simple sentence
    len = _printf("Let's try to printf a simple sentence.\n");

    // Testing printf with the same sentence
    len2 = printf("Let's try to printf a simple sentence.\n");

    // Creating an unsigned integer that exceeds INT_MAX
    ui = (unsigned int)INT_MAX + 1024;

    // Creating a sample memory address
    addr = (void *)0x7ffe637541f0;

    // Testing _printf with format specifier for length
    _printf("Length:[%d, %i]\n", len, len);

    // Testing printf with the same format specifier
    printf("Length:[%d, %i]\n", len2, len2);

    // Testing _printf with a negative integer
    _printf("Negative:[%d]\n", -762534);

    // Testing printf with the same negative integer
    printf("Negative:[%d]\n", -762534);

    // Testing _printf with an unsigned integer
    _printf("Unsigned:[%u]\n", ui);

    // Testing printf with the same unsigned integer
    printf("Unsigned:[%u]\n", ui);

    // Testing _printf with unsigned octal representation
    _printf("Unsigned octal:[%o]\n", ui);

    // Testing printf with the same unsigned octal representation
    printf("Unsigned octal:[%o]\n", ui);

    // Testing _printf with unsigned hexadecimal representation
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    // Testing printf with the same unsigned hexadecimal representation
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    // Testing _printf with a character
    _printf("Character:[%c]\n", 'H');

    // Testing printf with the same character
    printf("Character:[%c]\n", 'H');

    // Testing _printf with a string
    _printf("String:[%s]\n", "I am a string !");

    // Testing printf with the same string
    printf("String:[%s]\n", "I am a string !");

    // Testing _printf with a memory address
    _printf("Address:[%p]\n", addr);

    // Testing printf with the same memory address
    printf("Address:[%p]\n", addr);

    // Testing _printf with a percent sign
    len = _printf("Percent:[%%]\n");

    // Testing printf with the same percent sign
    len2 = printf("Percent:[%%]\n");

    // Displaying the length of _printf result
    _printf("Len:[%d]\n", len);

    // Displaying the length of printf result
    printf("Len:[%d]\n", len2);

    // Testing _printf with an unknown specifier (%r is not a valid specifier)
    _printf("Unknown:[%r]\n");

    // Testing printf with the same unknown specifier
    printf("Unknown:[%r]\n");

    return (0);
}
