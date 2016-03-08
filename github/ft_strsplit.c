/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 11:56:50 by jmunoz            #+#    #+#             */
/*   Updated: 2016/03/07 17:47:06 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strclen(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char		*ft_init_box(char *res, char c)
{
	size_t	i;
	char	*tab;

	tab = NULL;
	i = ft_strclen(res, c);
	tab = ft_strnew(i);
	return (tab);
}

static char		**ft_increase_tab(char **tab, int size)
{
	char	**final_tab;
	int		i;

	i = 0;
	final_tab = NULL;
	final_tab = (char**)malloc(sizeof(char*) * (size + 2));
	if (!final_tab)
		return (NULL);
	while (tab[i])
	{
		final_tab[i] = tab[i];
		i++;
	}
	final_tab[i++] = NULL;
	final_tab[i] = NULL;
	free(tab);
	return (final_tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		size;
	char	*ret;
	char	**tab;

	size = 0;
	tab = (char**)malloc(sizeof(char*));
	tab[0] = NULL;
	if (s)
	{
		ret = (char*)s;
		while (*ret)
		{
			while (*ret == c && *ret)
				ret++;
			if (*ret)
			{
				tab = ft_increase_tab(tab, size);
				tab[size] = ft_init_box(ret, c);
				ft_strncpy(tab[size++], ret, ft_strclen(ret, c));
			}
			while (*ret != c && *ret)
				ret++;
		}
	}
	return (tab);
}
