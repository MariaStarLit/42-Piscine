/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:09:40 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/22 18:21:59 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

/*int	main(void)
{
	printf("n1: %d\n", ft_is_prime(0));
	printf("n2: %d\n", ft_is_prime(1));
	printf("n3: %d\n", ft_is_prime(11));
	printf("n4: %d\n", ft_is_prime(42));
	printf("n5: %d\n", ft_is_prime(47));
	printf("n6: %d\n", ft_is_prime(2147483647));
}*/
