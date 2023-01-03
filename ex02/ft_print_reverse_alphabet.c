/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:35:05 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/10 19:42:00 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		write(1, &rev, 1);
		rev--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}*/
