/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:17:41 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/15 11:21:13 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*void	ft_add(unsigned int a, char *s)
{
	char *p;

	p = s;
	*s = *s + 1 + a ;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}
/*
int main (void)
{
	char	a[4] = "123";
	void (*p)(unsigned int, char*) = ft_add;
	ft_striteri(a, p);
	printf("%s\n", a);
	return (0);
}*/
