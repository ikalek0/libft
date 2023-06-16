/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:17:45 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/16 16:05:35 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*sstrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}

static size_t	sstrlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && sstrchr(set, s1[start]))
		start++;
	end = sstrlen(s1);
	while (end > 0 && sstrchr(set, s1[end]))
		end--;
	return (ft_substr((s1 + start), 0, (end - start +1)));
}
