/*
** EPITECH PROJECT, 2023
** B-CPE-101-TLS-1-1-myprintf-tony.fournales
** File description:
** main.c
*/

#include <stdio.h>
#include "../include/printf.h"

int main(void)
{
    my_printf("%d\n", 1);
    printf("%d\n", 1);
    printf("===============\n");
    my_printf("%i\n", 2);
    printf("%i\n", 2);
    printf("===============\n");
    my_printf("%s\n", "string");
    printf("%s\n", "string");
    printf("===============\n");
    my_printf("%c\n", 'c');
    printf("%c\n", 'c');
    printf("===============\n");
    my_printf("%%\n");
    printf("%%\n");
    printf("===============\n");
    my_printf("%u\n", 12345);
    printf("%u\n", 12345);
    printf("===============\n");
    return 0;
}
