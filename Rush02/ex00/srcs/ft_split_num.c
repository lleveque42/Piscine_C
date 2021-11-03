/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:24:46 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 20:52:40 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"basic_funct.h"
#include<stdlib.h>

char	**ft_split_num(char *num)
{
	 int	i;
	 int	len;
	char	**out;

	i = 0;
	len = ft_strlen(num, 0);
	if (len % 3 != 0)
	{
		out = malloc((len / 3 + 2) * sizeof(char *));
		out[i] = malloc((3 + 1) * sizeof(char));
		ft_strncpy(out[i], num, (len % 3), (3 - (len % 3)));
		num += (len % 3);
		i++;
	}
	else
		out = malloc((len / 3 + 1) * sizeof(char *));
	while (*num)
	{
		out[i] = malloc((3 + 1) * sizeof(char));
		ft_strncpy(out[i], num, 3, 0);
		num += 3;
		i++;
	}
	out[i] = NULL;
	return (out);
}

void	ft_clean_split_num(char **num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		free(num[i]);
		i++;
	}
	free(num);
}
