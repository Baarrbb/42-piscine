/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:09:04 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 13:15:24 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(2, 1));
	printf("%d\n", ft_recursive_power(2, 10));
	printf("%d\n", ft_recursive_power(3, 2));
	printf("puissance 0 : %d\n", ft_recursive_power(2, 0));
	printf("puissance neg : %d\n", ft_recursive_power(2, -10));
	printf("overflow : %d\n", ft_recursive_power(2, 100));
}
*/