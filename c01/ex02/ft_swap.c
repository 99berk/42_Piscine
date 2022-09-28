/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:55:01 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/01 18:09:20 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
int	main(void)
{
	int x;
	int y;

	x = 3;
	y = 5;

	printf("x: %d, y: %d\n", x,y);
	ft_swap(&x, &y);
	printf("x: %d, y: %d", x,y);
}
*/
