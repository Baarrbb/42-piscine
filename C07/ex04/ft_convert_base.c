/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:59:20 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:11:43 by marvin           ###   ########.fr       */
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
