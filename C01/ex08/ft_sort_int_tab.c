/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:15:31 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/18 12:56:56 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	acopy;

	acopy = *a;
	*a = *b;
	*b = acopy;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 1;
	while (size > i)
	{
		if (tab[i] < tab[i - 1])
		{
			ft_swap(&tab[i], &tab[i - 1]);
			i = 1;
		}
		else
		{
			i++;
		}
	}
}
