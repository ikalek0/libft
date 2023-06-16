/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:49:51 by inigo             #+#    #+#             */
/*   Updated: 2023/06/16 14:15:10 by inde-la-         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len2;
	size_t	len3;

	if (!s)
		return (NULL);
	len3 = 0;
	while (s[len3] != '\0')
		len3++;
	if (len3 <= start || len3 == 0 || len == 0)
		return (ft_strdup(""));
	len2 = 0;
	if (len3 - start > len)
		len2 = len + 1;
	else
		len2 = len3 - start + 1;
	sub = (char *)malloc((len2) * sizeof(char));
	if (!sub)
		return (NULL);
	sub[len2] = '\0';
	sstrlcpy(sub, s + start, len2);
	return (sub);
}
