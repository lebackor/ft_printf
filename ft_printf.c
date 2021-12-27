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
        i += ft_putnbr(va_arg(args, int));
    if (c == 'i')
        i += ft_putnbr(va_arg(args, int));
    if (c == 'u')
        i += ft_putnbr_u(va_arg(args, unsigned long));
    if (c == 'x')
        i += ft_print_hexa(va_arg(args, unsigned int), 0, &i);
    if (c == 'X')
        i += ft_print_hexa(va_arg(args, unsigned int), 1, &i);
    if (c == '%')
        i += ft_putchar('%');
    else
        return i;
    return (i + p);
}

unsigned long long    ft_putnbr_u(unsigned long long nb)
{
    unsigned long i;

    i = ft_count_nb(nb);
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
	return (i);
}
/*unsigned long ft_putnbr_count_u(unsigned long nb)
{    
    unsigned long i;

    i = 0;
    ft_putnbr_u(nb);
    i = (unsigned long)ft_strlen(ft_itoa((unsigned long)nb));
        // printf("\nPUTNBR COUNT = %d\n", i);
    return (i);
}*/

long long ft_count_nb(long long nb)
{
    long long i;

    i = 0;
    if (nb < 0)
        i++;
    while (nb / 10)
    {
        nb /= 10;
        i++;
    }
    return (i +1);
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
    return (k);
}
int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    //int a;
  //  int ret_ft_printf;
  //  int ret_printf;
    //a = atoi(av[1]);
   // printf("\n%X\n", a);
    ft_printf("= %u\n", ft_printf("%x/%x", atoi(av[1]), atoi(av[2])));
    printf("= %u\n", printf("%x/%x", atoi(av[1]),  atoi(av[2])));
  //  ft_printf(" = %d\n", ft_printf("%c", '0'));
 //   printf("\n                           DIFF                       \n");
 //   printf(" = %d\n",  printf("%c", '0'));
}