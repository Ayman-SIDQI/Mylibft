/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:34:06 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/21 12:00:32 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(const char *s, char dm)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != dm && (s[i + 1] == dm || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

static char	**allocator(const char *s, char **ret, char dm, size_t wc)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == dm)
			i++;
		while (s[i + count] != dm && s[i + count])
			count++;
		if (j < wc)
		{
			ret[j] = ft_substr(s, i, count);
			j++;
		}
		i = i + count;
		count = 0;
	}
	return (ret);
}

char	**ft_split(char const *so, char dm)
{
	char	**ret;
	size_t	wcount;

	if (!so)
		return (0);
	wcount = wordcounter(so, dm);
	ret = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!ret)
		return (0);
	ret = allocator(so, ret, dm, wcount);
	ret[wcount] = NULL;
	return (ret);
}
/*
#include<stdio.h>

int    main (void)
{
	char **a;
	a = ft_split("......", '.');
	printf("%s\n",a[0]);
	//printf("%s\n",a[1]);
	//printf("%s\n",a[2]);
	return (0);
}*/
