/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:36:50 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/19 20:19:31 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}	
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	int *tab = NULL;
	int i = 0;
	int len = ft_ultimate_range(&tab, 5, 5);
	if(tab == NULL)
		printf("null\n");
	
	printf("len : %d\n", len);
	while (i < len)
	{
		printf("%d\n", tab[i]);
		i++;
	} 
	if (tab != NULL)
		free(tab);
	return 0;
}
*/