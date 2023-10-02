/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuc <bsuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:29:55 by bsuc              #+#    #+#             */
/*   Updated: 2023/09/16 13:30:53 by bsuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, ft_strlen(to_find)) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *test = ft_strstr("42 1337 Network 2021 piscine B", "B");
	printf("%s\n", test);
	char *test1 = ft_strstr("piscine Benguerir Khouribga", "ine");
	printf("%s\n", test1);
	char *test2 = ft_strstr("The quick brown lazy dog", "dog");
	printf("%s\n", test2);
	char *test3 = ft_strstr("42  @1337 Network 2021 piscine", "");
	printf("%s\n", test3);
	
	char *test4 = ft_strstr("42  @1337 Network 2021 piscine", "asdf");
	printf("%s\n", test4);
	char *test5 = ft_strstr("", "a");
	//char *test5 = strstr("", "a");
	printf("%s\n", test5);
	char *test6 = ft_strstr("s", "a");
	printf("%s\n", test6);
}
*/