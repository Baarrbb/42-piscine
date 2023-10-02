/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:00:26 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/13 13:35:34 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "World";
	char dest[20] = "Hello";
	printf("%s\n", ft_strncat(dest, src, 2));
	//printf("%s\n", strncat(dest, src, 5));
}
*/