/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorhone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:13:32 by tkorhone          #+#    #+#             */
/*   Updated: 2024/06/30 18:36:39 by tkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	while (col++ < y)
	{
		row = 0;
		while (row++ < x)
		{
			if ((row == 1 && col == 1) || (row == x && col == 1))
				ft_putchar('A');
			else if ((row == 1 && col == y) || (row == x && col == y))
				ft_putchar('C');
			else if ((col == 1) || (col == y))
				ft_putchar('B');
			else if ((col != 1 && row == 1) || (col != 1 && row == x))
				ft_putchar('B');
			else if ((col != y && row == 1) || (col != y && row == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return (0);
}
