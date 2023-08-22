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
    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("%c\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("%s\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("%%\n");
    printf("Percent:[%%]\n");

    _printf("%c", 'H');
    _printf("%c", 'H');
    _printf("%c\n", 'H');

    return (0);
}
