/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:10:18 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/08 21:59:40 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*ret;

	i = 0;
	len = 0;
	if (!s1 || !s2)
		return (0);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (0);
	while (s1[len])
	{
		ret[len] = s1[len];
		len++;
	}
	while (s2[i])
		ret[len++] = s2[i++];
	ret[len] = '\0';
	return (ret);
}
/*
#include<stdio.h>
int main (void)
{
	printf("%s\n",ft_strjoin("Ayman"," SIDQI"));
	return (0);
}*/
