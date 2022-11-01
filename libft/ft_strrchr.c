/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:00:11 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/20 16:27:51 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ts;
	char	tc;

	ts = (char *)s;
	tc = c;
	i = ft_strlen(ts);
	while (ts[i] != tc)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (ts + i);
}
/*
 * We start the count from strlen and we go down, 
 * if the index we are in is not the one we are on, 
 * we decrement once, 
 * if there is a match we just exit and return a pointer plus the i.*/
