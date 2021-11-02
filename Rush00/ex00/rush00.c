/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:34:47 by lleveque          #+#    #+#             */
/*   Updated: 2021/10/17 12:34:30 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(char a, char b, int x)
{
	int	comptx;

	ft_putchar(a);
	comptx = x - 2;
	while (comptx > 0)
	{
		ft_putchar(b);
		comptx--;
	}
	if (x > 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	compty;

	if (x > 0 && y > 0)
	{
		line('o', '-', x);
		compty = y - 2;
		while (compty > 0)
		{
			line('|', ' ', x);
			compty--;
		}
		if (y > 1)
			line('o', '-', x);
	}
}
