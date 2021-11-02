/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:18:44 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/23 14:39:59 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check_input(char *argv)
{
	int i;

	i = - 1;
	if (argv[31] != '\0')
		return (0);
	while (argv[++i])
	{
		if (i % 2 == 1 && argv[i] != ' ')
			return (0);
		else if (i % 2 == 0)
			if ('1' > argv[i] || argv[i] > '4')
				return (0);
	}
	return (1);
}

void	parse_constraints(char *argv, char str[8][3])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(j < 4){
		str[j][0] = argv[i];
		str[j][1] = argv[i+8];
		str[j][2] = '\0';
		str[j+4][0] = argv[i+16];
		str[j+4][1] = argv[i+24];
		str[j+4][2] = '\0';
		i += 2;
		++j;
	}
}


int main(int argc, char *argv[])
{
	char	constraints[8][3] = {"in", "at", "in", "at", "in", "at", "in", "at"};
	if (argc != 2 || check_input(argv[1]) == 0)
		  write(1, "Error\n", 6);
	parse_constraints(argv[1], constraints);
	printf("test");
	for(int i = 0; i < 8; ++i)
		printf("%s\n", constraints[i]);
	return (0);
}
