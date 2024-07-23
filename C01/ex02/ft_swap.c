/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzditove <yzditove@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:08:40 by yzditove          #+#    #+#             */
/*   Updated: 2024/07/02 11:03:54 by yzditove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main (void)
{
	int x, y;
	printf("Enter value x");
	scanf("%d", &x);
	printf("\nEnter value y");
	scanf("%d", &y);
	ft_swap(&x, &y);
	printf("\nAfter swapping: x=%d, y=%d", x, y);
	return 0;
}*/
