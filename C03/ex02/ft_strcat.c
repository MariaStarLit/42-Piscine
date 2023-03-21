/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:57:35 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 21:58:02 by mde-avel         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	orig[30] = "Bun!!!";
	char	des[30] = "Honney_";

	ft_strcat(des, orig);
	printf ("return: %s", des); 
}*/
