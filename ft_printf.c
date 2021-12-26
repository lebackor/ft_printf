#include "ft_printf.h"
#include <stdio.h>
int ft_check_pourcent(char c, va_list args)
{
    int i;

    i = 0;
    if (c == 'c')
        i += ft_putchar(va_arg(args, int));
    if (c == 's')
        i += ft_putstr(va_arg(args, char *));
    if (c == 'p')
        i += ft_pointer(va_arg(args, unsigned int));
    if (c == 'd')
        i += ft_putnbr_count(va_arg(args, int));
    if (c == 'i')
        i += ft_putnbr_count(va_arg(args, int));
    if (c == 'u')
        i += ft_putnbr_count_u(va_arg(args, unsigned long));
    if (c == 'x')
        i += ft_print_hexa(va_arg(args, unsigned int), 0);
    if (c == 'X')
        i += ft_print_hexa(va_arg(args, unsigned int), 1);
    if (c == '%')
        i += ft_putchar('%');
    else
        return i;
    return i;
}

void    ft_putnbr_u(unsigned long nb)
{
    if (nb < 0)
	{
		nb = 4294967296 - nb;
		write(1, "-", 1);
	}
	if (nb >= 0 && nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return ;
}
unsigned long ft_putnbr_count_u(unsigned long nb)
{    
    unsigned long i;

    i = 0;
    ft_putnbr_u(nb);
    i = (unsigned long)ft_strlen(ft_itoa((unsigned long)nb));
        // printf("\nPUTNBR COUNT = %d\n", i);
    return (i);
}
int ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);
    int i;
    int k;

    i = 0;
    k = 0;
   /* while (str)
        str = ft_print_until(&str[i], args);
    */
   while (str[i])
   {
    while (str[i] && str[i] != '%')
        {
            ft_putchar(str[i]);
            i++;
            k++;
        }
        if (!str[i])
            return (k);
        else if (str[i] == '%' && ((str[i + 1] >= 'a' && str[i + 1] <= 'z') || str[i + 1] == 'X' || str[i + 1] == '%'))
            k += ft_check_pourcent(str[++i], args);
        i++;
   }
    va_end(args);
    return (i);
}

int main(int ac, char **av)
{
    (void) ac;
    //int a;
  //  int ret_ft_printf;
  //  int ret_printf;
    //a = atoi(av[1]);
   // printf("\n%X\n", a);
    ft_printf("= %d\n", ft_printf(" [%s -%s, jai %u] ", av[1], NULL, atoi(av[3])));
    printf("= %d\n", printf(" [%s -%s, jai %u] ", av[1], NULL, atoi(av[3])));
}