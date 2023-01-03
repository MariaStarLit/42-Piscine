/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:47:38 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/22 17:08:04 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		i = 2;
		while (i <= 46340)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("n1: %d\n", ft_sqrt(1));
	printf("n2: %d\n", ft_sqrt(4));
	printf("n3: %d\n", ft_sqrt(2));
	printf("n4: %d\n", ft_sqrt(3));
	printf("n5: %d\n", ft_sqrt(2147483647));
}*/
