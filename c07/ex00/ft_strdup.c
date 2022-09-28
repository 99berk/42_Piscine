/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:41:01 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/15 16:41:59 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		counter;
	char	*str;

	counter = 0;
	str = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	while (src[counter] != '\0')
	{
		str[counter] = src[counter];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
/*
int	main()
{
	char src[] = "berk";
	printf("%s", ft_strdup(src));
}*/
