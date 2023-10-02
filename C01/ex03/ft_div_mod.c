/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:31:52 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/07 17:06:42 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
}
*/