/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:35:10 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:08:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
