/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:28:51 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/10 18:14:26 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_lowercase("abcdefghijkl"));
	printf("%d\n", ft_str_is_lowercase("abcAdefghijkl"));
	printf("%d\n", ft_str_is_lowercase("-_134556efSghij67"));
}
*/