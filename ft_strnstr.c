/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:10:30 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/07 16:56:17 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	i2;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		i2 = 0;
		if (haystack[i] == needle[i2])
		{
			while (i + i2 < len && haystack[i + i2] == needle[i2])
			{
				i2++;
				if (needle[i2] == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
