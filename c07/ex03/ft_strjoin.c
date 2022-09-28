/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:43:03 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/15 16:43:10 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		index;
	int		c;
	int		c1;

	result = malloc(sizeof(strs));
	index = 0;
	c = 0;
	while (index < size)
	{
		c1 = 0;
		while (strs[index][c1] != '\0')
			result[c++] = strs[index][c1++];
		c1 = 0;
		while (sep[c1] != '\0' && index != size - 1)
			result[c++] = sep[c1++];
		index++;
	}
	result[c] = '\0';
	return (result);
}
/*
int	main()
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 19 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you will be awesome";
	separator = " sep ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
}*/
