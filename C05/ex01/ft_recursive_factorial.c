/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:55:05 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 12:54:36 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(6));
	printf("%d\n", ft_recursive_factorial(7));
	printf("%d\n", ft_recursive_factorial(8));
	printf("%d\n", ft_recursive_factorial(9));
	printf("%d\n", ft_recursive_factorial(10));
	printf("%d\n", ft_recursive_factorial(11));
	printf("overflow : %d\n", ft_recursive_factorial(101));
	printf("neg : %d\n", ft_recursive_factorial(-11));
}
*/