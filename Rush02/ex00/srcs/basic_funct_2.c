/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_funct_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:27:29 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:26:44 by lleveque         ###   ########.fr       */
/*   Updated: 2021/10/30 20:26:31 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_tab(char **tab)
{
	int	len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i]))
		i++;
	return (s1[i] - s2[i]);
}
