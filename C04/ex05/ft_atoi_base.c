/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:34:36 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/20 13:06:34 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
		i++;
	if (i == 0 || i == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	lenstr(char *str, char *base)
{
	int	i;
	int	j;
	int	ok;

	i = 0;
	ok = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		j = 0;
		ok = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				ok = 1;
			j++;
		}
		if (ok == 0)
			return (i);
		i++;
	}
	return (i);
}

int	power(int nb, int power)
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

int	pos(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb_neg;
	int	i;
	int	r;

	i = 0;
	nb_neg = 0;
	r = 0;
	if (check(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nb_neg++;
		i++;
	}
	while (i < lenstr(str, base))
	{
		r += pos(base, str[i]) * power(check(base), lenstr(str, base) - 1 - i);
		i++;
	}
	if ((nb_neg % 2) != 0)
		return (r *= -1);
	return (r);
}

/*
#include <stdio.h>
int main(void)
{
	int i = ft_atoi_base("\t\v  - --7kb", "0123456789abcdef"); 
	printf("%d\n", i);//0 pcq espace apres le moins
	i = ft_atoi_base("\t\v  ---7kb", "0123456789abcdef"); //-7
	printf("%d\n", i);
	i = ft_atoi_base("\t\v  ---j", "0123456789abcdef"); //0
	printf("%d\n", i);
	int j = ft_atoi_base("1092", "0123456789abcdef"); //4242
	printf("%d\n", j);
	int b = ft_atoi_base("11", "01"); //3
	printf("%d\n", b);
	
	int c = ft_atoi_base("101101", "01"); // 45
	printf("%d\n", c);
	c = ft_atoi_base("   ff", "0123456789abcdef"); //255
	printf("%d\n", c);
	c = ft_atoi_base("-10000000000000000000000000000000", "01"); // -2147483648
	printf("%d\n", c);
	c = ft_atoi_base("         ---10101001", "01"); // -169
	printf("%d\n", c);
	c = ft_atoi_base("     +---59", "0123456789abcdef"); // -89
	printf("%d\n", c);
	c = ft_atoi_base("    +-14353", "0123456789"); // -14353
	printf("%d\n", c);
	c = ft_atoi_base("    +--2147483647", "0123456789abcdef"); // -14353
	printf("%d\n", c);
}
*/