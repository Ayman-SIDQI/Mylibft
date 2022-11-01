/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:10:31 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/18 16:32:01 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *root;
	t_list	*new;
	t_list	*head;

	root = ft_lstnew("b");
	new = ft_lstnew("c");
	root->next = new;
	head = ft_lstnew("d");

	ft_lstadd_front(&root, head);
	head.next = new;
	return (0);
}*/
