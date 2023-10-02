/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:10:47 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/07 12:15:13 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*
int main()
{
	ft_is_negative(0);
	ft_is_negative(8);
	ft_is_negative(42);
	ft_is_negative(2147483647);
	ft_putchar('\n');
	ft_is_negative(-1);
	ft_is_negative(-42);
	ft_is_negative(-2147483648);
}
*/