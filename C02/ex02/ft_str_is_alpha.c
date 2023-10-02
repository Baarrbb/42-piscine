/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:04:51 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/09 12:41:02 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_str_is_alpha("abcdefghijkl"));
	printf("%d\n", ft_str_is_alpha("abcdefghijk2l"));
	printf("%d\n", ft_str_is_alpha("23adsaffq"));
}
*/