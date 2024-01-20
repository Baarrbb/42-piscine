/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:32:25 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:07:23 by marvin           ###   ########.fr       */
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
