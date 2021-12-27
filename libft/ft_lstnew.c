/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebackor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:29:05 by lebackor          #+#    #+#             */
/*   Updated: 2021/12/06 19:38:49 by lebackor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*t;

	t = malloc(sizeof(t_list));
	if (!t)
		return (NULL);
	t->content = content;
	t->next = NULL;
	return (t);
}
/*
#include <stdio.h>
int main()
{
	t_list *a;
	
	a->content = 5;
	a->next = ft_lstnew(8);
	a->next->next = NULL;
	while (a)
	{
		printf("%d\n", (int)a->content);
		a = a->next;
	}
}
*/
