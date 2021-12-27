/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:14:38 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/03 12:49:00 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*s1;
	unsigned char		*d1;
	size_t				i;

	s1 = (unsigned const char *)src;
	d1 = (unsigned char *)dst;
	i = 0;
	if (s1 == NULL && d1 == NULL)
		return ((void *) d1);
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return ((void *)d1);
}
/*#include <stdio.h>
#include <libc.h>
int main(int ac, char **av)
{
	(void) ac;
	(void) av;

	printf("%s\n", ft_memcpy(av[1], av[2], atoi(av[3])));
	//printf("%s\n", memcpy("hello", "howareyou", 5));
	//ft_memcpy(dest, src, 1);
	
//	printf("src =%s\n dest =%s\n", src, dest);
}
*/
