/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:50:05 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/20 16:04:17 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
void	kill(void *c)
 {
 	free(c);
 }
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main (void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew(ft_strdup("AYMAN"));
	b = ft_lstnew(ft_strdup("HAKIM"));
	c = ft_lstnew(ft_strdup("MERIEM"));
	a->next=b;
	b->next=c;

	ft_lstdelone(a, kill)
	return (0);
}*/
