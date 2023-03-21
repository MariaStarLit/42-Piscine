/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:18:44 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:53:45 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	swap1;
	int	swap2;

	swap1 = -23452;
	swap2 = 1966;
	printf ("antes 1: %d; 2: %d\n", swap1, swap2);
	ft_swap(&swap1, &swap2);
	printf ("depois 1: %d; 2: %d\n", swap1, swap2); 
}*/
