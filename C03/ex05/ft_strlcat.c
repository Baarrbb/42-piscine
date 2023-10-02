/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:02:30 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/16 13:33:24 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = dest_len;
	if (size <= dest_len || size == 0)
		return (size + src_len);
	while (src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "Testt";
	char dest[] = "Test";
	printf("%u\n", ft_strlcat(dest, src, 2));
	//printf("%zu\n", strlcat(dest, src, 2));
	printf("%s\n", dest);
}
*/