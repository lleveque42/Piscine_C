/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:27:29 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:29:28 by lleveque         ###   ########.fr       */
/*   Updated: 2021/10/30 20:26:31 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "basic_funct.h"
#include "t_dict.h"
#include "for_parse_dict.h"
#include "display_alpha_funct.h"

char	*display_first_str(t_dict *dict, char **tab, int count, int i)
{
	int		n;
	char	*strcopy;

	n = ft_strlen(tab[count], i);
	strcopy = ft_strdup(tab[count], "");
	ft_putstr(get_alpha_char(dict, tab[count][i]));
	ft_putchar(' ');
	strcopy = convert_each_nbr(strcopy, n, i);
	ft_putstr(get_alpha_str(dict, strcopy, i));
	if (tab[count][i + 1] != '0' || tab[count][i + 2] != '0')
		ft_putchar(' ');
	free(strcopy);
	return (tab[count]);
}

char	*display_second_str(t_dict *dict, char **tab, int count, int i)
{
	int		n;
	char	*strcopy;

	n = ft_strlen(tab[count], i);
	strcopy = ft_strdup(tab[count], "");
	if (tab[count][i] == '1')
	{
		ft_putstr(get_alpha_str(dict, strcopy, i));
		return (tab[count]);
	}
	else
	{
		strcopy = convert_each_nbr(strcopy, n, i);
		ft_putstr(get_alpha_str(dict, strcopy, i));
		if (tab[count][i + 1] != '0')
			ft_putchar(' ');
	}
	free(strcopy);
	return (tab[count]);
}

void	display_last_str(t_dict *dict, char **tab, int count, int i)
{
	ft_putstr(get_alpha_char(dict, tab[count][i]));
}

void	display_prefix(t_dict *dict, char **tab, int count, int tab_count)
{
	char	*strcopy;
	int		n;

	n = count;
	if (count < tab_count - 1)
	{
		strcopy = ft_strdup(tab[count], "");
		ft_putchar(' ');
		tab[n] = convert_each_prefix(tab[n], (((tab_count - count) * 3) - 2));
		ft_putstr(get_alpha_str(dict, tab[n], 0));
		if (tab[count + 1])
			ft_putchar(' ');
		if (!tab[count + 1])
			ft_putchar('\n');
		free(strcopy);
	}
}

void	display_alpha(t_dict *dict, char **tab, int tab_count)
{
	int		i;
	int		count;
	int		n;

	count = 0;
	while (count < tab_count)
	{
		i = 0;
		n = ft_strlen(tab[count], i);
		if (n == 3 && tab[count][i] != '0')
			tab[count] = display_first_str(dict, tab, count, i++);
		if (tab[count][i] == '0')
			i++;
		n = ft_strlen(tab[count], i);
		if (n == 2 && tab[count][i] != '0')
			tab[count] = display_second_str(dict, tab, count, i++);
		if (tab[count][i] == '0')
			i++;
		n = ft_strlen(tab[count], i);
		if (n == 1 && tab[count][i] != '0' && tab[count][i - 1] != '1')
			display_last_str(dict, tab, count, i);
		if (check_zero(tab[count]))
			display_prefix(dict, tab, count, tab_count);
		count++;
	}
}
