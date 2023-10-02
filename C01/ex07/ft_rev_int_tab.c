/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:52:06 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/07 17:25:12 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		i;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}

/*
int main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int tab_imp[5] = {1, 2, 3, 4, 5};
	int i = 0;

	ft_rev_int_tab(tab, 6);

	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab_imp, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab_imp[i]);
		i++;
	}
}
*/
