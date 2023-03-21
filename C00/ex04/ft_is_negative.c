/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:48:19 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:47:39 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	np;

	if (n >= 0)
	{
		np = 'P';
		write(1, &np, 1);
	}
	else
	{
		np = 'N';
		write(1, &np, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	write(1, "\n", 1); 
}*/
