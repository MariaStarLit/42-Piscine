/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:10:03 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:58:06 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}

/*int	main(void)
{
	char			orig[30] = "Bun!";
	char			des[30] = "Honney ";
	unsigned int	n = 4;

	ft_strncat(des, orig, n);
	printf ("return: %s\n", des); 
}*/
