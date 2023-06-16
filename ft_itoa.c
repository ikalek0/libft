/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:05:04 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/16 18:31:28 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	snumlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
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

char	*ft_itoa(int n)
{
	size_t	n_len;
	long	num;
	char	*str;

	n_len = snumlen(n);
	num = n;
	str = (char *)scalloc((n_len +1), sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[n_len--] = '\0';
	while (num)
	{
		str[n_len--] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
