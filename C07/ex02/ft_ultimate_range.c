/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:20:28 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/24 19:25:42 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(*range) * (size));
	if (!range)
	{
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

/*int	main(void)
{
	int	*array;
	int	range;
	int	i;

	range = ft_ultimate_range(&array, 1, 9);
	i = 0;
	printf("--------\nInt Array\n--------\n");
	while (array[i])
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n--------\nArray Size\n--------\n");
	printf("%i\n", range);
}*/
