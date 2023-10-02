/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:29:01 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/23 18:47:16 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	len = max - min;
	tab = (int *)malloc(len * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main()
{
	int *tab = ft_range(0, 10);
	unsigned long i = 0;
	if(tab == NULL){
		printf("null\n");
		return 0;
	}
		
	
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}

	if (tab != NULL)
		free(tab);
	return 0;
}
*/