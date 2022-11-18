/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:50:36 by vballe            #+#    #+#             */
/*   Updated: 2022/11/18 17:57:18 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SPLIT 
allocates (malloc)and returns an array of strings by splitting a string S.
To split the string a character 
C will be used as a delimiter char.
The array must end with a NULL pointer.*/

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*getsubstr(char const *s, int c)
{
	char	*sub;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted_word;
	int		count;
	int		i;
	int		aux;

	i = 0;
	aux = count_words(s, c);
	count = 0;
	splitted_word = (char **)malloc((aux + 1) * sizeof(char *));
	if (!splitted_word)
		return (NULL);
	splitted_word[aux] = NULL;
	while (count < aux)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			splitted_word[count] = getsubstr(s + i, c);
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		i++;
	}
	return (splitted_word);
}
