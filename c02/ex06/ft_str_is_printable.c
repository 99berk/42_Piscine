/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:21:22 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 17:27:40 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 127)
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
	char str1[] = "rhd35rSah";
	int	a = ft_str_is_printable(str1);
	printf("%d ", a);
}
*/
