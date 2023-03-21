/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:54:05 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 22:00:15 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		num = ft_recursive_factorial(nb - 1);
		num = num * nb;
		nb--;
	}
	else
		num = nb;
	return (num);
}

/*int	main(void)
{
	int	n;
	int	res;

	n = -3 + 7;
	res = ft_recursive_factorial(n);
	printf("n = %d, res = %d\n", n, res); 
}*/
