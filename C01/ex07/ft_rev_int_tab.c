/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 10:46:19 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/18 09:00:12 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	acopy;

	acopy = *a;
	*a = *b;
	*b = acopy;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	size--;
	i = 0;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		i++;
		size--;
	}
}
