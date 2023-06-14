/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:48:14 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/14 12:42:44 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)s2)[i] = ((unsigned char *)s1[i]);
		i++;
	}
	return (s2);
}

/*char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}*/