/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zy_putnbru.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:51:48 by enja              #+#    #+#             */
/*   Updated: 2021/12/14 16:56:53 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	zy_putnbru(unsigned int n)
{
	if (n < 0)
	{
		zy_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		zy_putnbru(n / 10);
		zy_putnbru(n % 10);
	}
	if (n < 10)
		zy_putchar(n + 48);
}
