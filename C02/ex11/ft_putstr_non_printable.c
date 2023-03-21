/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:08:45 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:46 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(char hexa[])
{
	hexa[0] = '0';
	hexa[1] = '1';
	hexa[2] = '2';
	hexa[3] = '3';
	hexa[4] = '4';
	hexa[5] = '5';
	hexa[6] = '6';
	hexa[7] = '7';
	hexa[8] = '8';
	hexa[9] = '9';
	hexa[10] = 'a';
	hexa[11] = 'b';
	hexa[12] = 'c';
	hexa[13] = 'd';
	hexa[14] = 'e';
	hexa[15] = 'f';
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;
	char	b;
	char	hexa[16];

	ft_convert(hexa);
	i = -1;
	while (str[++i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
		{
			write(1, &str[i], 1);
		}
		else
		{
			a = hexa[(unsigned char) str[i] / 16];
			b = hexa[(unsigned char) str[i] % 16];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
	}
}

/*int	main(void)
{
	char	nop[] = "\rCoucou\ntu vas bien ?";

	ft_putstr_non_printable(nop);
	write(1, "\n", 1); 
}*/
