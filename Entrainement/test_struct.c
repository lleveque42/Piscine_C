/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:29:30 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/30 10:05:14 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_rush02
{
	int nbr;
	char *nbr_in_letter;
}				t_rush02;

#include <stdio.h>

int main(int ac, char **av)
{
	t_rush02 n;

	n.nbr = 42;
	n.nbr_in_letter = "quarante deux";
	printf("%d = %s\n", n.nbr, n.nbr_in_letter);
	return (0);
}
