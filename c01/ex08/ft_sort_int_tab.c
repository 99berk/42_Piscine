/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:20:10 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 15:50:15 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i <= (size - 1))
	{
		j = 0;
		while (j <= (size - 1))
		{
			if (tab[i] < tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int nums[] = {5, 7, 2, 1, 4, 3};

	ft_sort_int_tab(nums, 6);

	int k;

	k = 0;
	while (k < 6)
	{
		printf("%d ", nums[k]);
		k++;
	}
}
*/
