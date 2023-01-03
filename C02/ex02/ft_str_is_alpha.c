/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:33:22 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/15 22:18:18 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (!((str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= 'a' && str[j] <= 'z')))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/*int	main(void)
{
	char	al[20] = "DFGHwerty";
	int n = ft_str_is_alpha(al);
	printf ("%d\n", n);
}*/
