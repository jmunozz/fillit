/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:21:07 by jmunoz            #+#    #+#             */
/*   Updated: 2016/02/22 15:09:30 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			i;
	int			j;

	i = 0;
	if (little == NULL || *little == '\0')
		return ((char*)big);
	while (i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j])
				j++;
			if (!little[j])
				return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
