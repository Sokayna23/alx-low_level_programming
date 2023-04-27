#include "lists.h"

/**
 * print_msg - prints a string befor main
 * Return: nothing
 */
void __attribute__((constructor))print_msg()
{
char *c;
c = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf("%s", c);
}
