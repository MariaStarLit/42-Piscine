/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:42:52 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:15 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (!(str[j] >= 'a' && str[j] <= 'z'))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/*int	main(void)
{
	char	lower[30] = "xixi";
	printf("%d\n", ft_str_is_lowercase(lower)); 
}*/
