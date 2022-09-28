/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:51:25 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/12 17:49:15 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / 2 && i <= 46341)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	else if (ft_is_prime(nb) == 0)
	{	
		while (ft_is_prime(nb) == 0 && nb < 2147483647)
		{
			nb++;
		}
		return (nb);
	}
	return (0);
}
/*
int main()
{
	printf("%d ", ft_find_next_prime(4)); 
}
*/
