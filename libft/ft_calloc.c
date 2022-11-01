/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:23:40 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/09 17:00:09 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*copy;

	copy = (void *)malloc(size * count);
	if (!copy)
		return (NULL);
	ft_bzero(copy, count * size);
	return (copy);
}
/*
int	main (void)
{
	char	str[10];

	str = (char *)ft_calloc(3, sizeof(int));
	printf("%s\n", str);
	return (0);
}*/
