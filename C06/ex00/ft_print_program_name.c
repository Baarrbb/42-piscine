/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:22:06 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:09:58 by marvin           ###   ########.fr       */
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
