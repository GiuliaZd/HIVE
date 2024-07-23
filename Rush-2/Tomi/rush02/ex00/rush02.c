/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorhone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:13:32 by tkorhone          #+#    #+#             */
/*   Updated: 2024/06/30 16:04:24 by tkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	col;

	col = 1;
	int	row;

	row = 1;
	while (col <= y)
	{
		while (row <= x)
		{
			if	((row == 1 && col == 1) || (row == x && col == 1))/*check for corners on top of rectangle  */
			{
				ft_putchar('A');
			}
			else if	((row == 1 && col == y) || (row == x && col == y))/*check for corners on bottom of rectangle */
			{
				ft_putchar('C');
			}
			else if	((col == 1) || (col == y)) /*check if it's the first/last column */
			{
				ft_putchar('B');
			}
			else if	((col != 1 && row == 1) || (col != 1 && row == x))/*check/add B for side's  */
			{
				ft_putchar('B');
			}
			else if	((col != y && row == 1) || (col != y && row == x))/*check/add B for side's */
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');/*fill middle area of rectangle */
			}
			row++;
		}
		write(1, "\n", 1);
		col++;
		row = 1;
	}
	return (0);
}
