/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:29:48 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/04 17:37:08 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str1[] = "Aefs eaf Afaef 3r43";
	ft_strupcase(str1);
	int i = 0;
	while (str1[i])
	{
		write(1, &str1[i], 1);
		i++;
	}
}
*/
