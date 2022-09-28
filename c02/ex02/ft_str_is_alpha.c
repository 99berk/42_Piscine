/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:38:04 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/06 13:54:45 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	char str[] = "berk";
	int a = ft_str_is_alpha(str);
	printf("%d ", a);
}
*/
