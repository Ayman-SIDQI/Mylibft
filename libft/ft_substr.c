/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:15:51 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/26 12:56:04 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	k;
	char	*init;

	k = 0;
	if (s)
	{
		if (start >= ft_strlen(s))
			return ((char *)ft_calloc(1, 1));
		if (len >= ft_strlen(s))
			return (ft_strdup(s + start));
		init = (char *)malloc (sizeof(char) * (len + 1));
		if (!init)
			return (0);
		while (k < len)
		{
			init[k] = s[start];
			k++;
			start++;
		}
		init[k] = '\0';
		return (init);
	}
	return (0);
}
/*
#include<stdio.h>
int main (void)
{
printf("%s\n", ft_substr("AYmansid.", 2, 3));
return (0);
}*/
