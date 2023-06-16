/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:33:42 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/16 19:00:46 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	sstrlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = sstrlen(s);
	str = (char *)scalloc(len +1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{	
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
