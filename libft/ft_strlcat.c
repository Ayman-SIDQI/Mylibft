/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:02:54 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/11 12:40:13 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	size_t	j;

	j = 0;
	srclen = ft_strlen(src);
	if (!dst && !dstsize)
		return (srclen);
	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + srclen);
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(&src[j]) + ft_strlen(dst));
}
/*
int	main (void)
{
	char	*str = "Ayman";
	char	dst[8] = "SIDQI";
	printf("%zu\n", ft_strlcat(dst, str, 8));
	printf("%s\n", dst);
	printf("%s\n", str);
	return (0);
}*/
