/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:04:32 by inde-la-          #+#    #+#             */
/*   Updated: 2023/04/19 18:49:44 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{	
		str[i] = c;
		i++;
	}
	i = 0;
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_memset("jlhcasjlacsjlas", 8, 5));
	return (0);
}
