/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 12:07:07 by jmunoz            #+#    #+#             */
/*   Updated: 2016/03/06 17:15:43 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char c_char;

	c_char = (char)c;
	while (*s)
	{
		if (*s == c_char)
			return ((char*)s);
		s++;
	}
	if (*s == c_char)
		return ((char*)s);
	return (NULL);
}
