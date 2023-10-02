/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:35:31 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/10 18:44:38 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_uppercase("ABCDEFGH"));
	printf("%d\n", ft_str_is_uppercase("ABCDEFGHaI"));
	printf("%d\n", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}
*/