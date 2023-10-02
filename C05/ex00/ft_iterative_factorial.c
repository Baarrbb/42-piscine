/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:35:10 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 12:54:24 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(8));
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(11));
	printf("overflow : %d\n", ft_iterative_factorial(100));
	printf("neg : %d\n", ft_iterative_factorial(-10));
}
*/