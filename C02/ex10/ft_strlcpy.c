/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:11:40 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/10 19:51:10 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;		

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char dest[10];
	char *src = "Hello";

	int i = ft_strlcpy(dest, src, 2);
	//int i = strlcpy(dest, src, 2);
	printf("%d\n", i);
	printf("dest --> %s\n", dest);
	printf("src -- > %s\n", src);
}
*/