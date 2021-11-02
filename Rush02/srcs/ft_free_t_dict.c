/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_t_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:44:04 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:30:30 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_dict.h"
#include <stdlib.h>

void	ft_free_t_dict(t_dict *to_free)
{
	int	i;

	i = 0;
	while (to_free[i].val != NULL)
	{
		free(to_free[i].val);
		free(to_free[i].alpha);
		i++;
	}
	free(to_free);
}
