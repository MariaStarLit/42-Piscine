/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:34:47 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:47:25 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483647 - 1)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}	
	//printf ("\ndivisao: %d\n", (nb / 10));
	//printf ("\nresto: %d\n", (nb % 10));

/*int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n'); 
}*/
