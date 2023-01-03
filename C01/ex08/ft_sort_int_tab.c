/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:56:18 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/14 16:44:06 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	menor;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = i;
		menor = tab[i];
		while (j < size)
		{
			if (menor >= tab[j])
			{
				menor = tab[j];
				aux = j;
			}
			j++;
		}
		tab[aux] = tab[i];
		tab[i] = menor;
		i++;
	}
}

/*int	main(void)
{
	int	ordenar[7] = {2, 7, 0, -3, -7, 2, -10};
	int	len = 7;
	int k;

	ft_sort_int_tab(ordenar, len);
	printf("reordenado:\n");
	k = 0;
	while (k < len)
	{
		printf("%d, ", ordenar[k]);
		k++;
	}
}*/
