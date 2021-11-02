/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_funct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 08:46:24 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 23:36:02 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_FUNCT_H
# define BASIC_FUNCT_H

# include<unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str, int i);
int		ft_strlen_zero(char *str, int i);
char	*ft_strncpy(char *dest, char *src, unsigned int n, unsigned int zero);
int		count_tab(char **tab);

#endif
