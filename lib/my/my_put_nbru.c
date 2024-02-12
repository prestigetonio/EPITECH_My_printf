/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** recurcive
*/

unsigned int recursive_put_nbru(unsigned int nbr)
{
    char c;
    int nb;

    if (nbr == 0) {
        return 0;
    }
    nb = nbr % 10;
    c = nb + 48;
    recursive_put_nbru(nbr / 10);
    my_putchar(c);
}

unsigned int my_put_nbru(unsigned int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = nb + 2000000000;
        nb = -nb;
    }
    if (nb == 0) {
        my_putchar(48);
    } else {
        return (recursive_put_nbru(nb));
    }
}
