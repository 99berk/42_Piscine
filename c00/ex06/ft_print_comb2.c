/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:33:23 by bakgun            #+#    #+#             */
/*   Updated: 2022/08/30 13:40:13 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 1;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			putchar(number1 / 10 + '0');
			putchar(number1 % 10 + '0');
			putchar(' ');
			putchar(number2 / 10 + '0');
			putchar(number2 % 10 + '0');
			if (number1 != 98 || number2 != 99)
			{
				write(1, ", ", 2);
			}
			number2++;
		}
		number1++;
	}
}
