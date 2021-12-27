/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:27:22 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/27 18:28:21 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int			ft_print_hexa(unsigned long long nb, int a, int *count);
int			ft_put_hexa_min(unsigned int nb);
int			ft_put_hexa_maj(unsigned int nb);
int			ft_check_pourcent(char c, va_list args);
const char	*ft_print_until(const char *str, va_list args);
int			ft_printf(const char *str, ...);
int			ft_pointer(unsigned long long nb, int *count);
int			ft_putnbr_u(unsigned int nb);
long long	ft_count_nb(long long nb);
#endif
