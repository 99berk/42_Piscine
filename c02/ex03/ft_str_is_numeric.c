/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:46:09 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 16:54:17 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
		if (str[i] >= '0' && str[i] <= '9')
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
	char str1[] = "13114a";
	int a = ft_str_is_numeric(str1);
	printf("%d ", a);
}
*/
