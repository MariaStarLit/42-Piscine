/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:21:17 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:19 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (!(str[j] >= 'A' && str[j] <= 'Z'))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/*int	main(void)
{
	char	upper[30] = "BANANA";
	printf("%d\n", ft_str_is_uppercase(upper)); 
}*/
