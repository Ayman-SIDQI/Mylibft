/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:02:40 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/25 18:16:10 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	char		*s;

	s = (char *)src;
	d = (char *)dst;
	if (!s && !d)
		return (0);
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dst);
}
/*
int main (void)
{
	char org[] = "hhhhhhhhh";
	char bruh[] = "abcd123";
	//char dyalobruh[] = "Ayman Sidqi";
	//ft_memcpy(bruh, (bruh + 2), 6);
	//printf("%s\n",bruh);
	ft_memmove((org), (bruh), 4);
	printf("%s\n",bruh);
	return (0);
}
*/
#include<stdio.h>
int main()
{
	char dst[] = "abcd at 123456789";
	printf("%s\n",memmove(&dst[6],&dst[0],7));
	return (0);
}

