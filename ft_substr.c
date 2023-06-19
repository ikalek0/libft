/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:49:51 by inigo             #+#    #+#             */
/*   Updated: 2023/06/19 20:19:51 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sstrlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static size_t	sstrlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (sstrlen(src));
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sstrlen(src));
}

static char	*sstrdup(char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	s2 = (char *)malloc((len + 1) * (sizeof(char)));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)s2)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	s2[len] = '\0';
	return (s2);
}

static void	*scalloc(size_t count, size_t size)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len2;

	if (!s)
		return (NULL);
	if (sstrlen(s) <= start || sstrlen(s) == 0 || len == 0)
		return (sstrdup(""));
	len2 = 0;
	if (sstrlen(s) - start > len)
		len2 = len + 1;
	else
		len2 = sstrlen(s) - start + 1;
	sub = (char *)scalloc(len2, sizeof(char));
	if (!sub)
		return (NULL);
	sstrlcpy(sub, s + start, len2);
	return (sub);
}
