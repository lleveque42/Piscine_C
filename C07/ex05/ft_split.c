/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:34:26 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/02 10:26:27 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	if (charset)
	{
		while (charset[i])
		{
			if (charset[i] == c)
				return (1);
			i++;
		}
		return (0);
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str)
	{
		while (is_in_charset(str[i], charset))
			i++;
		while (str[i])
		{
			if (str[i] && is_in_charset(str[i], charset))
			{
				while (str[i] && is_in_charset(str[i], charset))
					i++;
			}
			else
			{
				count++;
				while (str[i] && !is_in_charset(str[i], charset))
					i++;
			}
		}
	}
	return (count);
}

int	ft_strlen(char *str, char *charset, int i)
{
	int	len;

	len = 0;
	while (str[len + i])
	{
		if (is_in_charset(str[i], charset))
			return (len);
		len++;
	}
	return (len);
}

int	ft_strdup_split(char *str, char *tab, char *charset, int i)
{
	int		n;

	n = 0;
	while (str[i] && is_in_charset(str[i], charset))
		i++;
	tab = malloc(sizeof(char) * (ft_strlen(str, charset, i) + 1));
	if (!tab)
		return (0);
	while (str[i] && !is_in_charset(str[i], charset))
	{
		tab[n] = str[i];
		i++;
		n++;
	}
	if (tab)
		tab[n] = '\0';
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		j;
	int		i;
	int		w;

	j = 0;
	i = 0;
	w = word_count(str, charset);
	tab = malloc(sizeof(char *) * (w + 1));
	if (!tab)
		return (NULL);
	while (j < w)
	{
		i = ft_strdup_split(str, tab[j], charset, i);
		j++;
	}
	tab[j] = "0";
	return (tab);
}
