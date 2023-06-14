/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:49:51 by inigo             #+#    #+#             */
/*   Updated: 2023/06/14 13:07:27 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len2;
	size_t	len3;

	len3 = 0;
	while (s[len3] != '\0')
		len++;
	if (!s)
		return (NULL);
	if (len3 <= start || len3 == 0 || len == 0)
		return (ft_strdup(""));
	len2 = 0;
	if (len3 - start > len)
		len2 = len + 1;
	else
		len2 = len3 - start + 1;
	sub = ft_calloc(len2, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len2);
	return (sub);
}
