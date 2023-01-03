/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:04:57 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/15 22:14:11 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	while (src[c])
		c++;
	if (size != 0)
	{
		i = 0;
		while (src[i] && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}

/*int	main(void)
{
	char orig[] = "Honney";
	char desti[] = "Sugar Pie Honney Bun!";
	unsigned int n;

	n = ft_strlcpy(desti, orig, 7);
	printf("desti: %s\n", desti);
	printf("return: %d\n", n);
}*/
