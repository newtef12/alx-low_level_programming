/* hash_tables.h */
#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* Declarations for hash table functions go here */

#endif /* HASH_TABLES_H */

/* 1-djb2.c */
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_djb2 - function to compute hash of 'str' using djb2
 * @str: string to hash
 *
 * Return: value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}

/* 1-main.c */
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
