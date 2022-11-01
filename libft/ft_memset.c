/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:39:34 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/08 22:47:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ret;

	ret = (unsigned char *) b;
	while (len--)
	{
		*ret++ = (unsigned char)c;
	}
	return (b);
}
/*
int	main (void)
{
	char	al[6] = "Aymanm";
	short int	c;

	ft_memset (&c, 1, 2);
	printf ("%d\n", c);
	return (0);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

   int	main (void)
   {
   char	al[] = "AYMAN";
   ft_memset ((void *)al, 'z', 3);
   printf ("%s\n", al);
   return (0);
   }*/
