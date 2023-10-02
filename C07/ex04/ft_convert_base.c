/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:59:20 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/20 16:48:21 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	check(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	len_res(long nbr, char *base)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > ft_strlen(base) - 1)
	{
		nbr /= ft_strlen(base);
		len++;
	}
	return (len + 1);
}

char	*ft_putnbr_base(long nbr, char *base)
{
	int		i;
	char	nb;
	char	*res;

	i = len_res(nbr, base) - 1;
	res = malloc(i + 2 * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len_res(nbr, base)] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
	}
	while (nbr > ft_strlen(base) - 1)
	{
		nb = base[nbr % ft_strlen(base)];
		res[i] = nb;
		nbr /= ft_strlen(base);
		i--;
	}
	nb = base[nbr % ft_strlen(base)];
	res[i] = nb;
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	entier;
	char	*res;

	if (check(base_from) == 0 || check(base_to) == 0)
		return (NULL);
	entier = ft_atoi_base(nbr, base_from);
	res = ft_putnbr_base(entier, base_to);
	return (res);
}

/*
int main(void)
{
	char *res = ft_convert_base("-55555", "0123456789", "0123456789abcdef");
	printf("-d903 -> %s\n", res);
	res = ft_convert_base("42", "0123456789", "01");
	printf("101010 -> %s\n", res);
	res = ft_convert_base("-42", "0123456789", "01");
	printf("-101010 -> %s\n", res);
	res = ft_convert_base("101010", "01", "0123456789abcdef");
	printf("2a -> %s\n", res);
	res = ft_convert_base("-2147483648", "0123456789", "01");
	printf("-10000000000000000000000000000000 -> %s\n", res);
	res = ft_convert_base("2147483647", "0123456789", "01");
	printf("1111111111111111111111111111111 -> %s\n", res);
	res = ft_convert_base("-2147483648", "0123456789", "0123456789abcdef");
	printf("-80000000 -> %s\n", res);
	res = ft_convert_base("2147483647", "0123456789", "0123456789abcdef");
	printf("7FFFFFFF -> %s\n", res);

	res = ft_convert_base("-42", "0123456789", "012a3456789abcdef");
	printf("null -> %s\n", res);
	res = ft_convert_base("-42", "012345678 9", "0123456789abcdef");
	printf("null -> %s\n", res);

	res = ft_convert_base("--42", "0123456789", "0123456789abcdef");
	printf("2a -> %s\n", res);
	res = ft_convert_base("	  -42", "0123456789", "0123456789abcdef");
	printf("-2a -> %s\n", res);

	res = ft_convert_base("  - -42", "0123456789", "0123456789abcdef");
	printf("0 -> %s\n", res);
	res = ft_convert_base("	  -----++4j2", "0123456789", "0123456789abcdef");
	printf("-4 -> %s\n", res);

	res = ft_convert_base("	  -0", "0123456789", "0123456789abcdef");
	printf("0 -> %s\n", res);
	
	
	if(res != NULL)
		free(res);
}
*/