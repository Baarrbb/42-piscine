/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:57:26 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/26 12:51:25 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src) + 1;
	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*jsp;
	int			i;

	i = 0;
	jsp = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	while (i < ac)
	{
		jsp[i].size = ft_strlen(av[i]);
		jsp[i].str = av[i];
		jsp[i].copy = ft_strdup(jsp[i].str);
		i++;
	}
	jsp[i].str = 0;
	return (jsp);
}
