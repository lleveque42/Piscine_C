/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_alpha_funct.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 08:46:24 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/01 10:45:21 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_ALPHA_FUNCT_H
# define DISPLAY_ALPHA_FUNCT_H

# include<unistd.h>

char	*get_alpha_char(t_dict *out, char c);
char	*get_alpha_str(t_dict *out, char *str, int n);
char	*convert_each_nbr(char *str, int n, int first_str);
char	*convert_each_prefix(char *str, int n);
int		check_zero(char *tab);

#endif
