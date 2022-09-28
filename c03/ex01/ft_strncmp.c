/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:39:21 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/10 14:12:42 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s2[i] > s1[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char s1[] = "Helloq";
	char s2[] = "HelloWorld";
	int a = ft_strncmp(s1, s2, 6);
	printf("%d ", a);
}
*/
