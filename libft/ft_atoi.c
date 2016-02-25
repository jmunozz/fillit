/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 10:23:14 by jmunoz            #+#    #+#             */
/*   Updated: 2016/02/23 11:45:26 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nb;
	int		i;
	int		neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((int)str[i] >= 48 && (int)str[i] <= 57)
	{
		nb = nb * 10 + ((int)str[i] - 48);
		i++;
	}
	return (nb * neg);
}
