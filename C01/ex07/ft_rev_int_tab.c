/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:55:54 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:54:12 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size -1;
	while (i < j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	numeros[5] = {10, 45, 8, 3, 6};
	int	len = 5;
	int k;

	ft_rev_int_tab(numeros, len);
	printf("reverse:\n");
	k = 0;
	while (k < len)
	{
		printf("%d, ", numeros[k]); 
		k++;
	}
}*/
