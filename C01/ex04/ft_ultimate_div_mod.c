/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzditove <yzditove@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:06:24 by yzditove          #+#    #+#             */
/*   Updated: 2024/07/02 11:44:25 by yzditove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int number1;
	int number2;

	number1 = 5;
	number2 =2;
	ft_ultimate_div_mod(&number1,&number2);
	printf("%d\n%d\n", number1, number2);
	return(0);
}*/
