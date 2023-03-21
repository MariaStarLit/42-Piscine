/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:39:59 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 22:04:00 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}

/*int	main(void)
{
	int	i;
	int	*tab;
	int	min;
	int	max;

	min = 18;
	max = 18;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = 0;
		while (i < max - min)
		{
			printf("%d ", tab[i]);
			i++;
		}
	}
	else
		printf("Deu merda!"); 
}*/
