/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:19:14 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/09 12:42:23 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{

	printf("%d\n", ft_str_is_numeric("01948987493"));
	printf("%d\n", ft_str_is_numeric("0484882j8995489"));
	printf("%d\n", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}
*/