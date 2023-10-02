/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:12:11 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/09 12:52:46 by bsuc             ###   ########.fr       */
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

/*
#include <stdio.h>
int main()
{
	char str[] = "ABCDEFGHIJK";
	char str1[] = "agsKofnkFgbsdv";
	char str2[] = "23_-3FREWG4WVFSD4";


	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	return (0);
}
*/
