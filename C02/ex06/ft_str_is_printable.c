/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:39:34 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/09 12:48:07 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_printable("ABDELKFSCO"));
	printf("%d\n", ft_str_is_printable("\n\t\v\f"));
	printf("%d\n", ft_str_is_printable("-_134556efSghij67"));
}
*/