#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "libft/libft.h"
#include <stdio.h>
int    ft_print_hexa(unsigned int nb, int a);
int    ft_put_hexa_min(unsigned int nb);
int    ft_put_hexa_maj(unsigned int nb);
int ft_check_pourcent(char c, va_list args);
const char *ft_print_until(const char *str, va_list args);
int ft_printf(const char *str, ...);
int ft_pointer(unsigned int nb);
//int ft_putnbr_count(int nb);
unsigned long long ft_putnbr_u(unsigned long long nb);
long long ft_count_nb(long long nb);
//unsigned long ft_putnbr_count_u(unsigned long nb);
#endif