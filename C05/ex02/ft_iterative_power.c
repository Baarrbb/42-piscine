/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:00:19 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 13:15:03 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 10));
	printf("%d\n", ft_iterative_power(3, 2));
	printf("puissance 0 : %d\n", ft_iterative_power(2, 0));
	printf("puissance neg : %d\n", ft_iterative_power(2, -5));
	printf("overflow : %d\n", ft_iterative_power(2, 100));
}
*/