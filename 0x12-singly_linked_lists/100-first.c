#include "lists.h"

/**
 * before_main - prints a string befor main
 * Return: nothing
 */
void __attribute__((constructor))before_main()
{
char *c;
c = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf("%s", c);
}
