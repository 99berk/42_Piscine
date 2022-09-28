/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:25:49 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/08 17:08:26 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int main()
{
	char str1[] = " sorular";
	char str2[] = "Zor";

	ft_strncat(str2, str1, 5);

	int i = 0;
	while (str2[i])
	{
		write(1, &str2[i], 1);
		i++;
	}
}
*/
