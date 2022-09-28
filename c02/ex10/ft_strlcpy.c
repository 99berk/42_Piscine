/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:46:48 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/06 14:01:43 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i <= size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main()
{
	char str1[] = "Berhan";
	char str2[] = "Be";

	int a = ft_strlcpy(str2, str1, 6);

	int i = 0;
	while (str2[i])
	{
		write(1, &str2[i], 1);
		i++;
	}

	printf("\n%d", a);
}
*/
