/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:24:52 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/15 22:15:39 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (!(str[j] >= ' ' && str[j] <= '~'))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/*int	main(void)
{
	char	print[30] = "Sugar Pie";
	printf("%d\n", ft_str_is_printable(print));
}*/
