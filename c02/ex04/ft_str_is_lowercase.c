/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:55:27 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 17:02:33 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str1[] = "affae";
	int a = ft_str_is_lowercase(str1);
	printf("%d ", a);
}
*/
