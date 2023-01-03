/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:26:12 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/23 01:38:59 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(int size, char **av)
{
	int	i;

	i = 1;
	while (i < size)
	{
		while (*av[i])
		{
			write(1, av[i]++, 1);
		}
		write (1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int		j;
	int		j2;
	char	*c;

	j = 1;
	while (j < ac)
	{
		j2 = j + 1;
		while (j2 < ac)
		{
			if (ft_strcmp(av[j], av[j2]) > 0)
			{
				c = av[j];
				av[j] = av[j2];
				av[j2] = c;
			}
			j2++;
		}
		j++;
	}
	ft_putstr(ac, av);
	return (0);
}
