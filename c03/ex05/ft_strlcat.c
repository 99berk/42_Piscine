/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:30:24 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/08 17:06:25 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_s;
	unsigned int	len_d;

	i = 0;
	j = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	j = len_d;
	if (size == 0 || (size <= len_d))
	{
		return (len_s + size);
	}
	while (src[i] != '\0' && i < size - len_d - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_d + len_s);
}
/*
int main()
{
	char s1[] = "BerhanBerk";
	char d1[] = "Isim : ";

	int a = ft_strlcat(d1, s1, 13);

	printf("%d \n", a);
	printf("%s", d1);
}
*/
