/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:52:33 by mde-avel          #+#    #+#             */
/*   Updated: 2023/01/03 17:01:01 by mde-avel         ###   ########.fr       */
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
	unsigned int	len_d;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	len_d = ft_strlen(dest);
	if (size < len_d)
		return (ft_strlen(src) + size);
	while (src[i] && (len_d + i + 1) < size)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
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
