/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzditove <yzditove@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:42:41 by yzditove          #+#    #+#             */
/*   Updated: 2024/07/02 11:25:05 by yzditove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a, b, div, mod;
	a = 5;
	b = 2;
		
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n%d\n%d\n",a,b,div,mod);
	return(0);
}*/
