/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:50:58 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 16:08:27 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	printf("prime %d\n", ft_find_next_prime(2));
	printf("prime %d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("prime %d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("prime %d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(10));
	printf("prime %d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(12));
	printf("prime %d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(16));
	printf("prime %d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(18));
	printf("prime %d\n", ft_find_next_prime(19));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(21));
	printf("%d\n", ft_find_next_prime(22));
	printf("prime %d\n", ft_find_next_prime(23));
	printf("%d\n", ft_find_next_prime(24));
	printf("%d\n", ft_find_next_prime(25));
	printf("%d\n", ft_find_next_prime(26));
	printf("%d\n", ft_find_next_prime(27));
	printf("%d\n", ft_find_next_prime(28));
	printf("prime %d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(30));
	printf("prime %d\n", ft_find_next_prime(31));
	printf("%d\n", ft_find_next_prime(32));
	printf("%d\n", ft_find_next_prime(33));
	printf("97 : %d\n", ft_find_next_prime(91));
	printf("22063 : %d\n", ft_find_next_prime(22052));
	printf("prime : %d\n", ft_find_next_prime(22091));

	time_t begin = time(NULL);
	printf("prime %d\n", ft_find_next_prime(2147483629));
	time_t end = time (NULL);
	unsigned long secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );

	begin = time(NULL);
	printf("2147483647 %d\n", ft_find_next_prime(2147483643));
	end = time (NULL);
	secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );
}
*/