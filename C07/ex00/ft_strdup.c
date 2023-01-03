/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:55:47 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/24 19:03:43 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(new))
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

/*int	main(int ac, char **av)
{
	char	*mine;
	char	*theirs;

	if (ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);
		printf("mine: |%s|\nthey: |%s|\n", mine, theirs);
	}
	return (0);
}*/
