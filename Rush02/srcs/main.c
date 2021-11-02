/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 21:34:16 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:32:00 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_dict.h"
#include "ft_free_t_dict.h"
#include "display_alpha_funct.h"
#include "display_alpha.h"
#include "basic_funct.h"
#include "for_parse_dict.h"

void	ft_put_err(char *err)
{
	int	i;

	i = 0;
	while (err[i])
		write(2, &err[i++], 1);
	write(2, "\n", 1);
}

int	av_is_zero(t_dict *dict, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == '0')
			i++;
		j++;
	}
	if (i == ft_strlen(str, 0))
	{
		ft_putstr(get_alpha_char(dict, '0'));
		return (1);
	}
	return (0);
}

int	ft_checkinput(int ac, char **av)
{
	int		i;
	char	*to_check;

	i = 0;
	if (ac == 2)
		to_check = av[1];
	else
		to_check = av[2];
	if (ft_strlen_zero(to_check, 0) == ft_strlen("4294967295", 0))
	{
		if (ft_strcmp(to_check, "4294967295") > 0)
			return (0);
	}
	else if (ft_strlen_zero(to_check, 0) > ft_strlen("4294967295", 0))
		return (0);
	while (to_check[i] != '\0')
	{
		if (to_check[i] < '0' || to_check[i] > '9' )
			return (0);
		i++;
	}
	return (1);
}

int	error_dict(t_dict *dict)
{
	if (!dict)
	{
		ft_put_err("Dict Error");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	**parsed_nb;
	int		parsed_nb_count;

	if (ac > 3 || ac == 1 || !ft_checkinput(ac, av))
	{
		ft_put_err("Error");
		return (0);
	}
	else if (ac == 2)
		dict = ft_get_dict("numbers.dict");
	else if (ac == 3)
		dict = ft_get_dict(av[1]);
	if (!error_dict(dict) || av_is_zero(dict, av[2]))
		return (0);
	if (ac == 2)
		parsed_nb = ft_split_num(av[1]);
	if (ac == 3)
		parsed_nb = (ft_split_num(av[2]));
	parsed_nb_count = count_tab(parsed_nb);
	display_alpha(dict, parsed_nb, parsed_nb_count);
	ft_clean_split_num(parsed_nb);
	ft_free_t_dict(dict);
	ft_putchar('\n');
	return (0);
}
