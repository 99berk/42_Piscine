/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:45:50 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/05 10:58:00 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
			{
				str[i] = str[i] - 32;
				j = 0;
			}	
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str1);
	int i = 0;
	while (str1[i])
	{
		write(1, &str1[i], 1);
		i++;
	}
}
*/
