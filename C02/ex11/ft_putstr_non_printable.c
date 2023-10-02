/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_pritable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 23:19:28 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/10 18:46:51 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}

void	to_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			to_hex(str[i]);
		i++;
	}
}

/*
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
	write(1, "\n", 1);
	ft_putstr_non_printable("\t01");
	write(1, "\n", 1);
	ft_putstr_non_printable("\x1F");
	write(1, "\n", 1);
}
*/