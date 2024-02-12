/*
** EPITECH PROJECT, 2023
** printf
** File description:
** emacs
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

static int my_printf_s(const char *format, va_list ap)
{
    my_putstr(va_arg(ap, char *));
    return 0;
}

static int my_printf_pourcentage(const char *format, va_list ap)
{
    my_putchar('%');
    return 0;
}

static int my_printf_u(const char *format, va_list ap)
{
    my_put_nbru(va_arg(ap, int));
    return 0;
}

int my_printf_d(const char *format, va_list ap)
{
    my_put_nbr(va_arg(ap, int));
    return 0;
}

int my_printf_i(const char *format, va_list ap)
{
    my_put_nbr(va_arg(ap, int));
    return 0;
}

int my_printf_c(const char *format, va_list ap)
{
    my_putchar(va_arg(ap, int));
    return 0;
}

int find_fonction(const char *format, va_list ap)
{
    if (*(format + 1) == 'd') {
        my_printf_d(format + 1, ap);
    }
    if (*(format + 1) == 'i') {
        my_printf_i(format + 1, ap);
    }
    if (*(format + 1) == 'c') {
        my_printf_c(format + 1, ap);
    }
    if (*(format + 1) == 's') {
        my_printf_s(format + 1, ap);
    }
    if (*(format + 1) == '%') {
        my_printf_pourcentage(format + 1, ap);
    }
    if (*(format + 1) == 'u') {
        my_printf_u(format + 1, ap);
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    while (*format) {
        if (*format == '%') {
            find_fonction(format, ap);
            format++;
        } else {
            my_putchar(*format);
        }
        format++;
    }
    va_end(ap);
    return 0;
}
