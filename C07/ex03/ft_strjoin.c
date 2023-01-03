/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:39:02 by mde-avel          #+#    #+#             */
/*   Updated: 2023/01/03 17:19:02 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_foll_len(int size, char **strs, char *sep)
{
	int	in;
	int	len;

	in = 0;
	len = 1;
	while (in < size)
	{
		len = len + ft_strlen(strs[in]);
		in++;
	}
	len = len + ft_strlen(sep) * (size -1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		t;

	i = 0;
	j = 0;
	t = 0;
	if (size == 0)
		return (malloc(1));
	res = malloc(get_foll_len(size, strs, sep));
	if (!res)
		return (0);
	while (i < size)
	{
		while (strs[i][j])
			res[t++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			res[t++] = sep[j++];
		j = 0;
		i++;
	}
	res[t] = '\0';
	return (res);
}

/*int	main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = " Pum ";
		offset++;
	}
	res_str = ft_strjoin(3, strs, "! !");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}*/