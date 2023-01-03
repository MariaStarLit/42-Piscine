/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:52:33 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/16 22:54:14 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_d;

	j = ft_strlen(dest);
	i = 0;
	len_d = ft_strlen(dest);
	if (size < 1)
		return (ft_strlen(src) + size);
	while (src[i] && len_d < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size < len_d)
		return (ft_strlen(src) + size);
	else
		return (len_d + ft_strlen(src));
}

/*int	main(void)
{
	char				orig[20] = "Bun!";
	char				des[50] = "Honney 9";
	unsigned int		n = 1;
	unsigned int		res;

	res = ft_strlcat(des, orig, n);
	printf ("dest: %s\n", des);
	printf ("return: %d\n", res);
}*/
