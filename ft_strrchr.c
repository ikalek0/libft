/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:19:45 by inde-la-          #+#    #+#             */
/*   Updated: 2023/04/26 15:03:31 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = 1 + ft_strlen(s);
	while (len >= 0)
	{	
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
