/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:48:32 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/09 12:51:19 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "abcdefghijk";
	char str1[] = "agsKofnkFgbsdv";
	char str2[] = "23_-3frewg4wvfsd4";

	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));

	return (0);
}
*/