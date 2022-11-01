/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:25:27 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/08 21:58:47 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	new = (char *)malloc (sizeof(char) * (len + 1));
	if (!new)
		return (0);
	new[len] = '\0';
	while (i != len)
	{
		new[i] = s1[i];
		i++;
	}
	return (new);
}
/*
#include<stdio.h>
int	main (void)
{
char	*str1 = "AYMAN.";
char	*str2 = "AYMAN.";
printf("%s\n%s\n",ft_strdup("AAAAAAAAAAAAAAAAA"), str1);
printf("%s\n%s\n",strdup("AAAAAAAAAAAAAAAAA"), str2);
return (0);
}
*/
