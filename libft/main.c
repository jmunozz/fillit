/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 08:39:10 by jmunoz            #+#    #+#             */
/*   Updated: 2016/02/25 10:57:53 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>
# include <libc.h>

int		main(int ac, char **av)
{
	char s1[10] = "cinq";
	char s3[10] = "cinq";
	char *s2;

	s2 = NULL;
	//test ft_strlen
	printf("size: %zu\n", ft_strlen(av[1]));
	//test ft_strdup
	//printf("copy: %s\n", ft_strdup(av[1]));
	/* test ft_strcpy
	printf("strcpy : %s\n", strcpy(av[1], av[2]));
	printf("my function : %s\n", ft_strcpy(av[3], av[4]));
	*/
	/* test ft_strncpy
	printf("strncpy : %s\n", strncpy(av[1], av[2], atoi(av[3])));
	printf("my function : %s\n", ft_strncpy(av[4], av[5], atoi(av[6])));
	*/
	/* test ft_strcat
	printf("strcat : %s\n", strcat(s1, av[1]));
	printf("my function : %s\n", ft_strcat(s2, av[1]));
	*/
	/* test ft_strncat
	printf("strncat : %s\n", strncat(s1, av[1], atoi(av[2])));
	printf("my function : %s\n", ft_strncat(s2, av[1], atoi(av[2])));
	*/
	/* test ft_strlcat
	printf("strlcat : %lu\n", strlcat(s1, av[1], atoi(av[2])));
	printf("%s\n", s1);
	printf("my function : %lu\n", ft_strlcat(s2, av[1], atoi(av[2])));
	printf("%s", s2);
	*/
	/* test ft_strchr
	printf("strchr: %s\n", strchr(av[1], atoi(av[2])));
	printf("my function: %s\n", strchr(av[1], atoi(av[2])));
	*/
	/* test ft_strrchr
	printf("strrchr: %s\n", strrchr(av[1], atoi(av[2])));
	printf("my function: %s\n", ft_strrchr(av[1], atoi(av[2])));
	*/
	/* test ft_strstr	
	printf("strstr: %s\n", strstr(av[1], av[2]));
	printf("my function: %s\n", ft_strstr(av[1], av[2]));
	*/
	/*test ft_strnstr	
	printf("strnstr: %s\n", strnstr(av[1], av[2], atoi(av[3])));
	printf("my function: %s\n", ft_strnstr(av[1], av[2], atoi(av[2])));
	*/
	/* test ft_strcmp
	printf("strcmp : %d\n", strcmp(av[1], av[2]));
	printf("my function : %d\n", ft_strcmp(av[1], av[2]));
	*/
	printf("stnrcmp : %d\n", strncmp(av[1], av[2], atoi(av[3])));
	printf("ft_strncmp : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	/* test ft_atoi
	printf("atoi :%d\n", atoi(av[1]));	
	printf("my function: %d\n", ft_atoi(av[1]));
	return (0);
	*/
}
	
