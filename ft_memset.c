/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inde-la- <inde-la-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:04:32 by inde-la-          #+#    #+#             */
/*   Updated: 2023/06/11 18:39:56 by inde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//NO ESTA ACABADO
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{	
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
