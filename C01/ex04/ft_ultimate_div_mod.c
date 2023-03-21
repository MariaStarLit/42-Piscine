/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:49:05 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:53:52 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b1;

	a1 = *a;
	b1 = *b;
	*a = a1 / b1;
	*b = a1 % b1;
}

/*int	main(void)
{
	int	divi;
	int	resto;

	divi = 42;
	resto = 5;
	ft_ultimate_div_mod(&divi, &resto);
	printf ("Divisao: %d, Resto: %d\n", divi, resto); 
}*/
