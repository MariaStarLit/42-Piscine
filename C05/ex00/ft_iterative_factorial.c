/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:34:10 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 22:00:12 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
		return (res);
	}
}

/*int	main(void)
{
	int	n;
	int	res;

	n = 7;
	res = ft_iterative_factorial(n);
	printf("n = %d, res = %d\n", n, res); 
}*/
