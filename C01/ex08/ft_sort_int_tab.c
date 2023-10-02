/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:35:07 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/07 17:36:24 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		i;
	int		j;

	i = 0;
	tmp = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
int main()
{
	int tab[5] = {42, 22, 662, 2, -42};
	int i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("\n");
	int tab2[6] = {7, 6, 3, 4, 2, 5};
	ft_sort_int_tab(tab2, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d ", tab2[i]);
		i++;
	}

	printf("\n");
	
	int tab3[6] = {1, 2, 3, 4, 5, 6};
	ft_sort_int_tab(tab3, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d ", tab3[i]);
		i++;
	}
}
*/