/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:28:02 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/07 10:37:58 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	char	strvalue;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		strvalue = str[i];
		if (strvalue < 32 || strvalue > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[strvalue / 16]);
			ft_putchar(hex[strvalue % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
*/
