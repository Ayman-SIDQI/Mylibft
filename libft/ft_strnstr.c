/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:57:15 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/20 15:45:16 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	j = 0;
	if (!haystack && !len)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	h = (char *)haystack;
	n = (char *)needle;
	while (h[i] && i + j < len)
	{
		j = 0;
		while ((h[i + j] == n[j] && j + i < len)
			&& n[j] != '\0')
			j++;
		if (j == ft_strlen(n))
			return ((char *)h + i);
		i++;
	}
	return (NULL);
}

//    int	main (void)
//   {
//    printf("%s\n", ft_strnstr("", "a", 0));
//    printf("%s\n", strnstr("" , "a" , 0));
//    return (0);
// }
