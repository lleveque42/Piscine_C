/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_alpha.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 08:46:24 by alemarch          #+#    #+#             */
/*   Updated: 2021/10/31 10:32:55 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_ALPHA_H
# define DISPLAY_ALPHA_H

# include<unistd.h>

char	*display_first_str(t_dict *dict, char *str, int i);
char	*display_second_str(t_dict *dict, char *str, int i);
void	display_last_str(t_dict *dict, char *str);
void	display_alpha(t_dict *dict, char **str, int str_count);
char	**ft_split_num(char *num);
void	ft_clean_split_num(char **num);

#endif
