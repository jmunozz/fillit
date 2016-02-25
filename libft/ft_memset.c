/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 12:49:38 by jmunoz            #+#    #+#             */
/*   Updated: 2016/02/25 10:45:48 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char *b_temp;	

	b_temp = b;
	i = 0;
	if (!len || !b)
		return (b);
	while (i < len)
	{
		b_temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
