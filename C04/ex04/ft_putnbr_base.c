/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:32:25 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/16 15:43:31 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			base_len;
	long int	long_nbr;
	char		nb;

	i = 0;
	long_nbr = nbr;
	base_len = ft_strlen(base);
	if (base_len == 0 || base_len == 1)
		return ;
	if (base_check(base) == 0)
		return ;
	if (long_nbr < 0)
	{
		long_nbr *= -1;
		write(1, "-", 1);
	}
	if (long_nbr > base_len - 1)
		ft_putnbr_base(long_nbr / base_len, base);
	nb = base[long_nbr % base_len];
	write(1, &nb, 1);
}

/*
#include <stdio.h>
int main(void)
{	
	ft_putnbr_base(-123, "0123456789abcdef"); //-7B
	printf("\n");
	ft_putnbr_base(-123, "012+3456789abcdef"); //rien
	printf("\n");
	ft_putnbr_base(-4242, "0123456789abcdef"); //-1092
	printf("\n");
	ft_putnbr_base(0, "0123456789abcdef"); //0
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef"); // -80000000
	printf("\n");
	ft_putnbr_base(-2147483648, "01"); //-10000000000000000000000000000000
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789abcdef"); // 7FFFFFFF 
	printf("\n");
	ft_putnbr_base(2147483647, "01"); //1111111111111111111111111111111

	printf("\n");
	printf("\n");
	printf("-1100");
	ft_putnbr_base(-12, "01");
	printf("\n");
	printf("vp");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	printf("894867");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	printf("35");
	ft_putnbr_base(53, "0123456789abcdef");
	printf("\n");
	printf("0");
	ft_putnbr_base(0, "01");
	printf("\n");
	printf("   ");
	ft_putnbr_base(123, "");
	printf("\n");
	printf("   ");
	ft_putnbr_base(123, "abccde");
	printf("\n");
	printf("7fffffff");
	ft_putnbr_base(2147483647, "0123456789abcdef");
	printf("\n");
	printf("   ");
	ft_putnbr_base(123, "a");
}
*/