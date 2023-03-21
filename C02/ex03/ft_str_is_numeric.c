/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:58:26 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:11 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char*str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (!(str[j] >= '0' && str[j] <= '9'))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/*int	main(void)
{
	char	num[20] = "34";
	printf ("%d\n", ft_str_is_numeric(num)); 
}*/