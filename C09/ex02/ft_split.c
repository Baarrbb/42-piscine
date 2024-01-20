/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:11:06 by marvin            #+#    #+#             */
/*   Updated: 2024/01/20 19:14:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_charset(str[i], charset) && str[i])
			i++;
		if (!is_charset(str[i], charset) && str[i])
			count++;
		while (!is_charset(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

char	*malloc_word(char *str, int deb, int fin)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = fin - deb + 1;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = str[deb];
		deb++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**malloc_words(char **words, char *str, char *charset)
{
	int		i;
	int		j;
	int		count_letters;

	i = 0;
	j = 0;
	count_letters = 0;
	while (str[i])
	{
		while (is_charset(str[i], charset) && str[i])
			i++;
		while (!is_charset(str[i], charset) && str[i])
		{
			count_letters++;
			i++;
		}
		if (str[i] || !is_charset(str[i - 1], charset))
		{
			words[j] = malloc_word(str, (i - count_letters), (i - 1));
			j++;
			count_letters = 0;
		}
	}
	words[j] = NULL;
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;

	words = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words = malloc_words(words, str, charset);
	return (words);
}
