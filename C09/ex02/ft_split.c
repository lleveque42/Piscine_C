/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:22 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/03 16:46:36 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	if (charset[0] == '\0' && !charset)
		return (0);
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	if (charset[0] == '\0' || !charset)
		return (1);
	while (str && is_in_charset(str[i], charset))
		i++;
	while (str && str[i])
	{
		count++;
		while (str[i] && !is_in_charset(str[i], charset))
			i++;
		while (str[i] && is_in_charset(str[i], charset))
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset, int i)
{
	int	len;

	len = 0;
	if (charset[0] == '\0' || !charset)
	{
		while (str && str[len])
			len++;
		return (len);
	}
	while (str && is_in_charset(str[i], charset))
		i++;
	while (str && !is_in_charset(str[i], charset))
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_strcpy(char *str, char *tab, char *charset, int i)
{
	int	n;

	n = 0;
	while (str[i] && is_in_charset(str[i], charset))
		i++;
	while (str[i] && !is_in_charset(str[i], charset))
	{
		tab[n] = str[i];
		n++;
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		w;
	char	**tab;

	i = 0;
	j = 0;
	w = word_count(str, charset);
	tab = malloc(sizeof(char *) * (w + 1));
	while (j < w)
	{
		tab[j] = malloc(sizeof(char) * (word_len(str, charset, i) + 1));
		i = ft_strcpy(str, tab[j], charset, i);
		j++;
	}
	tab[j] = 0;
	return (tab);
}
