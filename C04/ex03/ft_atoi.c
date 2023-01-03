/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:58:21 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/17 21:30:02 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	excess(char **str2)
{
	int		sinal;
	char	*aux;

	aux = *str2;
	sinal = 1;
	while ((*aux >= 9 && *aux <= 13) || *aux == 32)
		aux++;
	while (*aux && (*aux == '+' || *aux == '-'))
	{
		if (*aux == '-')
			sinal = sinal * -1;
		aux++;
	}
	*str2 = aux;
	return (sinal);
}

int	ft_atoi(char *str)
{
	int	sinal;
	int	ret;

	sinal = excess(&str);
	ret = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	ret = ret * sinal;
	return (ret);
}

/*int	main(void)
{
	printf("%d", ft_atoi("\n\t\r\v\r++++--420"));
}*/
