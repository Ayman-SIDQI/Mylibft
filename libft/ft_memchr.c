/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:08:46 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/15 11:22:14 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return (0);
}
/*
int	main (void)
{
	char	*a;

	a = "Ayman";
	printf("%s\n", memchr(a, 'A', 1));
	return (0);
}
*/
