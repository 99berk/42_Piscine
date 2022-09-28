/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:42:16 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/15 16:42:25 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*mat;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	mat = (int *)malloc(size * sizeof(int));
	while (min < max)
	{
		mat[i] = min;
		min++;
		i++;
	}
	return (mat);
}
/*
int	main()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = -8;
	max = 7;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
