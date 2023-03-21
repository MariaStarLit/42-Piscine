/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:00:04 by mde-avel          #+#    #+#             */
/*   Updated: 2023/03/21 22:05:13 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// col = x
// line = y 

void	first_last_line(int x, int y, int col, int line)
{
	if (line == 1)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == y)
	{
		if (col == 1)
			ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
}

void	middle_lines(int x, int y, int col, int line)
{
	if (line > 1 && line < y)
	{
		if (col == 1 || col == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	col;
	int	line;

	if (x > 0 && y > 0)
	{
		line = 1;
		while (line <= y)
		{
			col = 1;
			while (col <= x)
			{
				first_last_line(x, y, col, line);
				middle_lines(x, y, col, line);
				col++;
			}
			ft_putchar('\n');
			line++;
		}
	}
}
