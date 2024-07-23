/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzditove <yzditove@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:47:46 by yzditove          #+#    #+#             */
/*   Updated: 2024/06/28 13:16:09 by yzditove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i ='0';
	while (i <='9')
	{
		write(1, &i, 1);
		i++;
	}
}

void	main(void)
{
	ft_print_numbers();
}
