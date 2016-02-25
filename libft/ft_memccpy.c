/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 11:10:09 by jmunoz            #+#    #+#             */
/*   Updated: 2016/02/25 12:01:32 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (dst && src)
	{
		while (n--)
		{
			*(unsigned char*)dst++ = *(unsigned char*)src++;
			if (*(unsigned char*)src == (unsigned char)c)
				return (dst);
		}
		return (NULL);
	}
}
