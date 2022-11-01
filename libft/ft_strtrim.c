/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:34:06 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/15 11:04:39 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	set_checker(const char *set, char asl)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (asl == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		o;

	i = 0;
	o = 0;
	if (!s1 || !set)
		return (0);
	j = ft_strlen(s1) - 1 ;
	while (s1[i] && set_checker(set, s1[i]) == 1)
			i++;
	while (j > i && set_checker(set, s1[j]) == 1)
			j--;
	trim = (char *)malloc((j - i) + 2);
	if (!trim)
		return (0);
	while (i <= j)
	{
		trim[o] = s1[i];
		i++;
		o++;
	}
	trim[o] = '\0';
	return (trim);
}
/*
   int main (void)
   {
   printf("%s\n",ft_strtrim("\t abc\t \n  ",""));
   return (0);
   }*/
