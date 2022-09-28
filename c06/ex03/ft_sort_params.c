/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:16:31 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/14 10:37:33 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac -1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
				ft_swap(&av[i], &av[i + 1]);
			i++;
		}
		j++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
