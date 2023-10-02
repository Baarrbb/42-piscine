/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_progam_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:22:06 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/16 18:55:21 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		ft_putstr(argv[0]);
	else
		ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
