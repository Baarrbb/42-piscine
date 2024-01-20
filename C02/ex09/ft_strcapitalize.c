/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:23:07 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:04:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_str_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]) && i == 0)
			str[i] = ft_strupcase(str[i]);
		while (ft_str_is_alpha(str[i]) == 1 || ft_str_is_numeric(str[i]) == 1)
			i++;
		while (ft_str_is_alpha(str[i]) == 0 && ft_str_is_numeric(str[i]) == 0)
			i++;
		if (ft_str_is_alpha(str[i]))
		{
			str[i] = ft_strupcase(str[i]);
			i++;
		}
	}
	return (str);
}
