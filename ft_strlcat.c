/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:47:17 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/07 14:18:27 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && (len_dst + i) < (dstsize - 1))
	{
			dst[len_dst + i] = src[i];
			i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + ft_strlen(src));
}
