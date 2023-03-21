/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:55:17 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:47:30 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a < 98)
	{
		a++;
		b = a;
		while (b < 99)
		{
			b++;
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			write(1, " ", 1);
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
			if (a < 98)
				write(1, ", ", 2);
		}
	}
}

/*int	main(void)
{
	ft_print_comb2(); 
}*/
