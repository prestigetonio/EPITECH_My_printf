/*
** EPITECH PROJECT, 2023
** emacs
** File description:
** printf.h
*/

#ifndef PRINTF_H
    #define PRINTF_H
    #include <stdarg.h>

int my_printf_float(const char *format, va_list ap);
unsigned int recursive_put_nbru(unsigned int nbr);
unsigned int my_put_nbru(unsigned int nb);
static int my_printf_s(const char *format, va_list ap);
static int my_printf_pourcentage(const char *format, va_list ap);
static int my_printf_u(const char *format, va_list ap);
int my_printf_i(const char *format, va_list ap);
int my_printf_c(const char *format, va_list ap);
int find_fonction(const char *format, va_list ap);
int my_printf_d(const char *format, va_list ap);
int my_printf(const char *format, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);

#endif
