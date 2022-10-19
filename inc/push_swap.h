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

typedef struct s_num
{
	int	fir;
	int	sec;
	int	thi;
}	t_num;

// general msg
int		err_msg(int err);
int		info_msg(int info);

// main args checker
int		check_duplicates(char **argv);
int		check_digit(char **argv, int i);
int		check_args(char **argv, int i);

// list
int		save_list(char **argv, t_list **stack_a, int i);

// utils
int		input_checker(int argc);
int		ft_identity_test(t_list **stack);
int		*ft_lst_to_array(t_list **stack, int dim);
int		find_num(int num, int *lis, int len);
int		ft_abs_value(int num);

void	ft_simple_moves(t_list **stack_a, t_list **stack_b, int n_a, int n_b);
void	ft_double_rotate(t_list **stack_a, t_list **stack_b, int n_a, int n_b);

// stack a moves
int		ft_sa(t_list **stack_a);
int		ft_pa(t_list **stack_a, t_list **stack_b);
int		ft_ra(t_list **stack_a);
int		ft_rra(t_list **stack_a);

// stack b moves
int		ft_sb(t_list **stack_b);
int		ft_pb(t_list **stack_a, t_list **stack_b);
int		ft_rb(t_list **stack_b);
int		ft_rrb(t_list **stack_b);

// general moves
int		ft_ss(t_list **stack_a, t_list **stack_b);
int		ft_rr(t_list **stack_a, t_list **stack_b);
int		ft_rrr(t_list **stack_a, t_list **stack_b);

// support moves
void	swap(t_list	**head_ref, t_list *curr, t_list *second);
void	rotate(t_list **stack);
void	reverse_rotate(t_list **stack);

// sorting
int		sort(t_list **stack_a, t_list **stack_b);
void	sort_stack_a(t_list **stack_a, t_list **stack_b, int *lis, int len);
void	sort_stack_b(t_list **stack_a, t_list **stack_b);
void	sort_3n(t_list **stack);

// lis
int		*ft_lis(int	*array, int size, int *len);

// find
int	ft_find_best(t_list	**stack_a, t_list	**stack_b);
int	ft_is_the_lowest(t_list **stack_a, int content);
int	ft_handle_lowest_highest(t_list	**stack_a, int b_content, int size_a);
int	ft_find_best(t_list	**stack_a, t_list	**stack_b);
int	ft_is_the_highest(t_list **stack_a, int content);

// calculate moves
int	ft_calculate_moves(t_list **stack_a, t_list **stack_b, int b_content);
int	ft_find_a_moves(int b_content, int size_a, t_list	**stack_a);
int	ft_find_b_moves(int b_content, int size_b, t_list	**stack_b);

#endif