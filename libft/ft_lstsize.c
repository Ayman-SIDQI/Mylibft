/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:40 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/19 12:13:32 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*curr;

	curr = lst;
	i = 0;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
/*
#include<stdio.h>
int	main (void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("a");
	b = ft_lstnew("b");
	a->next = b;
	printf("%d\n",ft_lstsize(a));
	return (0);
}*/
