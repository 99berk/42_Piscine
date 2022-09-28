/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:50:37 by bakgun            #+#    #+#             */
/*   Updated: 2022/08/27 16:40:57 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int colm, int col)
{
	int	x;
	int	y;

	y = 1;
	while (y <= col && colm > 0)
	{
		x = 1;
		while (x <= colm)
		{
			if ((x == 1 && y == 1) || (x == colm && y == 1))
				ft_putchar('A');
			else if ((x == 1 && y == col) || (x == colm && y == col))
				ft_putchar('C');
			else if ((x == 1) || (x == colm) || (y == 1) || (y == col))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}	
}
