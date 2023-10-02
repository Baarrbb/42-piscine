/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:12:05 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 15:54:37 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
	printf("0 : %d\n", ft_fibonacci(0));
	printf("1 : %d\n", ft_fibonacci(1));
	printf("1 : %d\n", ft_fibonacci(2));
	printf("2 : %d\n", ft_fibonacci(3));
	printf("3 : %d\n", ft_fibonacci(4));
	printf("5 : %d\n", ft_fibonacci(5));
	printf("8 : %d\n", ft_fibonacci(6));
	printf("13 : %d\n", ft_fibonacci(7));
	printf("610 : %d\n", ft_fibonacci(15));
	
	time_t begin = time(NULL);
	printf("timeout ?? 433494437 : %d\n", ft_fibonacci(43));
	time_t end = time (NULL);
	unsigned long secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );
	
	begin = time(NULL);
	printf("timeout ?? 701408733 : %d\n", ft_fibonacci(44));
	end = time (NULL);
	secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );

	begin = time(NULL);
	printf("timeout ?? 1134903170 : %d\n", ft_fibonacci(45));
	end = time (NULL);
	secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );

	begin = time(NULL);
	printf("timeout ?? 1836311903 : %d\n", ft_fibonacci(46));
	end = time (NULL);
	secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );
	
	begin = time(NULL);
	printf("47 overflow : %d\n", ft_fibonacci(47));
	end = time (NULL);
	secondes = (unsigned long) difftime( end, begin );
	printf( "Finished in %ld sec\n", secondes );
	
	printf("neg : %d\n", ft_fibonacci(-5));
	
	// 2 147 483 647
}
*/