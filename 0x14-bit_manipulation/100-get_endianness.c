#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void) {
    int n = 1;
    char *c = (char *) & n;
    return (*c == 1);
}
