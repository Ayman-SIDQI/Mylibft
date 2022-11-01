/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:35:28 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/15 11:25:42 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include<>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (s == 0 && d == 0)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main (void)
{
	//char dyalobruh[] = "Ayman Sidqi";
	//ft_memcpy(bruh, (bruh + 2), 6);
	//printf("%s\n",bruh);
	printf("%s\n", ft_memcpy("SIDQI", "AYMAN", 3));
	return (0);
}*/
