/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:51:35 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/14 20:01:22 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - (int)32;
		}	
		j++;
	}
	return (str);
}

/*int	main(void)
{
	char	fioup[40] = "Porra xoxoxo Xd";
	printf("%s\n", ft_strupcase(fioup));
}*/