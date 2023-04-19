/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:19:45 by inde-la-          #+#    #+#             */
/*   Updated: 2023/04/19 19:33:32 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	
	len = 1 + ft_strlen(s);
	while (i >= 0)
	{	
		if (s[i] = c)
			return (s[i]);
		i--;
	}
	return (0);
}
