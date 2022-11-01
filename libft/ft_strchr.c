/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:40:28 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/20 16:26:57 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ts;
	char	tc;
	int		i;

	ts = (char *)s;
	tc = c;
	i = 0;
	while (ts[i] != tc)
	{
		if (ts[i] == '\0')
			return (NULL);
		i++;
	}
	return (ts + i);
}
/*
#include<stdio.h>
int	main (void)
{
	char	*a;

	a = "Ayman";
	printf("%s", ft_strchr(a, 'Z'));
	return (0);
}*/
