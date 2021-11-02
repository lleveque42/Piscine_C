/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_alpha_funct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:27:29 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:29:58 by lleveque         ###   ########.fr       */
/*   Updated: 2021/10/30 20:26:31 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "basic_funct.h"
#include "t_dict.h"
#include "for_parse_dict.h"

char	*get_alpha_char(t_dict *dict, char c)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (dict[i].val[0] && dict[i].val[0] == c)
		{
			return (dict[i].alpha);
		}
		i++;
	}
	return ('\0');
}

char	*get_alpha_str(t_dict *dict, char *str, int n)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i].val)
	{
		j = 0;
		while (dict[i].val[j] == str[j + n] && str[j + n])
		{
			if (str[j + n + 1] == '\0' && dict[i].val[j + 1] == '\0')
				return (dict[i].alpha);
			j++;
		}
		i++;
	}
	return ('\0');
}

char	*convert_each_nbr(char *str, int n, int first_str)
{
	int	i;

	i = 1;
	if (n > 2)
		str[0] = '1';
	else if (n == 2 && first_str == 1)
	{
		str[1] = str[1];
		i++;
	}
	while (str[i])
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*convert_each_prefix(char *str, int n)
{
	int	i;

	i = 1;
	str[0] = '1';
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	check_zero(char *tab)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(tab, 0);
	while (tab[i] == '0')
		i++;
	if (i == len)
		return (0);
	return (1);
}
