/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:27:23 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 16:38:54 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char str[] = "berk";
	char str1[] = "";
	ft_strcpy(str1, str);
	
	int i = 0;
	while (str1[i])
	{
		write(1, &str1[i], 1);
		i++;
	}
}
*/
