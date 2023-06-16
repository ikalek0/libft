/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:09:08 by inigo             #+#    #+#             */
/*   Updated: 2023/06/16 14:11:17 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static size_t	ft_len(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static void	*ft_calloc2(size_t count, size_t size)
{
	size_t	t_size;
	char	*str;
	size_t	i;

	i = 0;
	t_size = count * size;
	str = (char *)malloc(t_size);
	if (!str)
		return (NULL);
	while (i < t_size)
	{	
		((unsigned char *)str)[i] = 0;
		i++;
	}
	return (str);
}

static void	*ft_memcpy2(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

static size_t	ft_strlcpy2(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}*/

static size_t	slen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (NULL);
	j = (char *)malloc((slen(s1) + slen(s2) + 1) * (sizeof(char)));
	if (!j)
		return (NULL);
	while (s1[i])
	{
		j[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		j[i] = s2[i2];
		i++;
		i2++;
	}
	j[i] = '\0';
	return (j);
}

/*	len = (ft_len(s1) + ft_len(s2) + 1);
	j = ft_calloc2(len, sizeof(char));
	if (!j)
		return (NULL);
	ft_memcpy2(j, s1, ft_len(s1) + 1);
	ft_strlcpy2(j + ft_len(s1), s2, len);
	return (j);
}
*/