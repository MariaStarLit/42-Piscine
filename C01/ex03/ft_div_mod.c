/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 00:07:08 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/14 16:29:03 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	n1;
	int	n2;
	int	divi;
	int	resto;

	n1 = 48;
	n2 = 9;
	ft_div_mod(n1, n2, &divi, &resto);
	printf ("Divisao: %d, Resto: %d\n", divi, resto);
}*/
