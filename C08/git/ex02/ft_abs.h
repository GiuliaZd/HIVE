/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzditove <yzditove@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:25:50 by yzditove          #+#    #+#             */
/*   Updated: 2024/07/17 10:25:58 by yzditove         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	abs_foo(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
# define ABS(Value) abs_foo(Value)
#endif
