/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:23:07 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/11 12:48:26 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_str_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]) && i == 0)
			str[i] = ft_strupcase(str[i]);
		while (ft_str_is_alpha(str[i]) == 1 || ft_str_is_numeric(str[i]) == 1)
			i++;
		while (ft_str_is_alpha(str[i]) == 0 && ft_str_is_numeric(str[i]) == 0)
			i++;
		if (ft_str_is_alpha(str[i]))
		{
			str[i] = ft_strupcase(str[i]);
			i++;
		}
	}
	return (str);
}

/*
#include<stdio.h>
int main(void)
{
	char str[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "";
	char str2[] = "a";
	char str3[] = "HELLO";
	char str4[] = "hello";
	char str5[] = "   hello";
	char str6[] = "	hello";
	char str7[] = "hello   ";
	char str8[] = "hello	";
	char str9[] = "hello	world";
	char str10[] = "hello   world";
	char str11[] = "a1b2c3d4e5f6g7h8i9j0";
	char str12[] = "!@#$%^&*()_+-=[]{}\\|;':\",./<>?";

	printf("%s\n", ft_str_capitalize(str));
	printf("%s\n", ft_str_capitalize(str1));
	printf("%s\n", ft_str_capitalize(str2));
	printf("%s\n", ft_str_capitalize(str3));
	printf("%s\n", ft_str_capitalize(str4));
	printf("%s\n", ft_str_capitalize(str5));
	printf("%s\n", ft_str_capitalize(str6));
	printf("%s.\n", ft_str_capitalize(str7));
	printf("%s.\n", ft_str_capitalize(str8));
	printf("%s\n", ft_str_capitalize(str9));
	printf("%s\n", ft_str_capitalize(str10));
	printf("%s\n", ft_str_capitalize(str11));
	printf("%s\n", ft_str_capitalize(str12));
	return (0);
}
*/