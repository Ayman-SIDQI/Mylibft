/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:12:50 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/10 11:27:42 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*char ft_sum(unsigned int a, char s)
{
	char b = s;
	b = b + 1;
	return (b);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	ret = (char *)malloc(sizeof(char) * i + 1);
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f (i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
int	main (void)
{
	char (*p)(unsigned int,char) = ft_sum;
	printf("%s\n",ft_strmapi("AYMAN", p));
	return (0);
}*/
