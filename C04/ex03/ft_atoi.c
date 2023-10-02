/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:10:19 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/16 18:14:20 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		nb_neg;
	int		result;

	i = 0;
	nb_neg = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nb_neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	if ((nb_neg % 2) != 0)
		return (result *= -1);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("0  %d\n", ft_atoi(" -- --+-+1234 b567"));
	printf("-1239   %d\n", ft_atoi("\t\r\v\n\f ----+-+1239ab567"));
	printf("-1234   %d\n", ft_atoi("	\r\v\n\f -1234ab567"));

	
	printf("12345   %d\n", ft_atoi("12345"));
	printf("-54321   %d\n", ft_atoi("-54321"));
	printf("4567   %d\n", ft_atoi("    4567"));
	printf("6789   %d\n", ft_atoi("+6789"));
	printf("123   %d\n", ft_atoi("123abc"));
	printf("0    %d\n", ft_atoi("0"));
	printf("0   %d\n", ft_atoi("-0"));
	printf("123     %d\n", ft_atoi("+000123"));
	printf("123     %d\n", ft_atoi("000123"));
	printf("2147483647     %d\n", ft_atoi("2147483647"));
	printf("-2147483648     %d\n", ft_atoi("-2147483648"));
	printf("-2147483648  %d\n", ft_atoi("2147483648"));
	printf("2147483647  %d\n", ft_atoi("-2147483649"));
	printf("0   %d\n", ft_atoi("-"));
	printf("0   %d\n", ft_atoi("+"));
	printf("0   %d\n", ft_atoi(""));
	printf("0    %d\n", ft_atoi("   "));
	printf("12  %d\n", ft_atoi("12 34"));
	printf("12  %d\n", ft_atoi("   +12 34"));
	printf("0   %d\n", ft_atoi("abc123"));
	printf("0   %d\n", ft_atoi("+abc123"));
	printf("123  %d\n", ft_atoi("123abc+"));
	printf("0     %d\n", ft_atoi("   - 0000"));
	printf("123  %d\n", ft_atoi("--123"));
	printf("-123  %d\n", ft_atoi("+-123"));
	
	printf("atoi --> %d\n", atoi("   -1234ab567"));
	printf("%d\n", ft_atoi(""));
	printf("atoi --> %d\n", atoi(""));
}
*/