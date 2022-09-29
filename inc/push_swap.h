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
#define PUSH_SWAP_H
#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"

int err_msg(int err);

int check_duplicates(int argc, char **argv);
int check_digit(int argc, char **argv);
int check_args(int argc, char **argv);

char **split_argv(int argc, char **argv);

#endif