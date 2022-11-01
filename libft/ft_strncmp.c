/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:07:11 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/10 12:35:42 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main (void)
{
	char	* a,b;
	a = "AYMAN";
	b = *a;
	printf("%d\n", ft_strncmp(&b, a, 10));
	printf("%d\n", strncmp(&b, a, 10));
	
	return (0);
}*/
