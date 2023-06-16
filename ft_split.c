/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:50:16 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/16 18:34:55 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	swrdcount(const char *s, char c)
{
	size_t	i;
	size_t	word_c;

	i = 0;
	word_c = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		word_c++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		while (s[i] != '\0' && s[i] == c)
			i++;
	}
	return (word_c);
}

static size_t	swrdlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
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

static char	**sfree(char **wlst)
{
	size_t	i;

	i = 0;
	while (wlst[i] != 0)
	{
		free(wlst[i]);
		i++;
	}
	free(wlst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**wlst;
	size_t	word_c;
	size_t	w_i;
	size_t	w_len;

	if (!s)
		return (NULL);
	word_c = swrdcount(s, c);
	wlst = (char **)scalloc(word_c + 1, sizeof(char *));
	if (!wlst)
		return (NULL);
	w_i = 0;
	while (w_i < word_c)
	{
		while (*s && *s == c)
			s++;
		w_len = swrdlen(s, c);
		wlst[w_i] = ft_substr(s, 0, w_len);
		if (!(wlst[w_i]))
			return (sfree(wlst));
		s = s + w_len;
		w_i++;
	}
	wlst[word_c] = 0;
	return (wlst);
}
