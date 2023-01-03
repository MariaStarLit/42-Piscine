/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:45:40 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/10 19:37:27 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	alfa;

	alfa = 'a';
	while (alfa <= 'z')
	{
		write(1, &alfa, 1);
		alfa++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
}*/
