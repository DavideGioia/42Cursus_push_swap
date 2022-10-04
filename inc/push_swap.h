/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:33:08 by dgioia            #+#    #+#             */
/*   Updated: 2022/09/24 17:33:08 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

int	err_msg(int err);

int	check_duplicates(char **argv);
int	check_digit(char **argv, int i);
int	check_args(char **argv, int i);

int	save_list(char **argv, t_list **stack_a, int i);

int	input_checker(int argc, char **argv);

#endif