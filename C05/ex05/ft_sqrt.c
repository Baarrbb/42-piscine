/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:23:23 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 15:18:57 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt <= 46340)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("5 :%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(23));
	printf("neg : %d\n", ft_sqrt(-25));
	printf("1 : %d\n", ft_sqrt(1));
	printf("0 : %d\n", ft_sqrt(0));

	printf("46340 : %d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147483646));
	
	//printf("%d\n", ft_sqrt(2147488281)); //overflow
}
*/