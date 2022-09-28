/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:03:21 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 17:05:47 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0')
	{
		j = 1;
	}
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 1;
		}
		else
		{
			j = 0;
			break ;
		}
		i++;
	}
	return (j);
}
/*
int	main()
{
	char str1[] = "SDFS";
	int a = ft_str_is_uppercase(str1);
	printf("%d ", a);
}
*/
