/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:08:11 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:56:35 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_lowercase(char *str)
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
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - (int)32;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				i++;
				str[i] = str[i] - (int)32;
			}
		}	
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	cap[100] = "salut, commEnt tu vaS ? 42moTs quarAnte-deux; cinquAnte+et+un";

	ft_strcapitalize(cap);
	printf("%s\n", cap); 
}*/
