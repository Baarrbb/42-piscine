/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:52:06 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:02:30 by marvin           ###   ########.fr       */
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
