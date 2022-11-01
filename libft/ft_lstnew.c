/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:02:09 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/18 19:17:46 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *value)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = value;
	new->next = NULL;
	return (new);
}
/*
#include<stdio.h>
int main(void)
{
	char	*ar;

	ar = "Ayman";
	printf("%s\n", (char *)ft_lstnew(ar)->content);
	//printf("%s\n", ft_lstnew(ar)->next);
	return (0);
}*/
