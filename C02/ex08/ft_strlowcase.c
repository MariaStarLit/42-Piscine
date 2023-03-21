/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:02:09 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:30 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] = str[j] + (int)32;
		}	
		j++;
	}
	return (str);
}

/*int	main(void)
{
	char	fiolow[40] = "Porra xOXOXOxo Xd";
	printf("%s\n", ft_strlowcase(fiolow)); 
}*/