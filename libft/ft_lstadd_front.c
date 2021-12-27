/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:38:03 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/06 19:22:43 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void) ac;

	t_list	*a;

	a->content = ft_lstnew((void *)5);
	//printf("%d\n", a);
	a->next = ft_lstadd_front(a, (t_list *)ft_atoi(av[1]));
	//printf("%d\n", a);

}*/
