/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:49:52 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/20 20:03:33 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;

	save = 0;
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		save = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = save;
	}
}
