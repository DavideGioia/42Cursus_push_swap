/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:24:46 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/28 16:47:23 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_final(t_list **stack_a, t_list **stack_b, int best_number)
{
	int	n_moves_a;
	int	n_moves_b;

	n_moves_a = ft_find_a_moves(best_number, ft_lstsize(*stack_a), stack_a);
	n_moves_b = ft_find_b_moves(best_number, ft_lstsize(*stack_b), stack_b);
	if ((n_moves_a < 0 && n_moves_b < 0) || (n_moves_a > 0 && n_moves_b > 0))
		double_rotate(stack_a, stack_b, n_moves_a, n_moves_b);
	else
		simple_moves(stack_a, stack_b, n_moves_a, n_moves_b);
	ft_pa(stack_a, stack_b);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_ra(stack_a);
}

void	sort_stack_ab(t_list **stack_a, t_list **stack_b, int *lis, int len)
{
	int	i;
	int	len_a;

	len_a = ft_lstsize(*stack_a);
	i = 0;
	while (i < len_a)
	{
		if (find_num((*stack_a)->content, lis, len) == 0)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a);
		i++;
	}
	return ;
}

void	sort_stack_a(t_list **stack_a, t_list **stack_b, int *lis, int len)
{
	if (ft_lstsize(*stack_a) == 1)
		return ;
	else if (ft_lstsize(*stack_a) == 3)
		sort_3n(stack_a);
	else if (ft_lstsize(*stack_a) > 3)
		sort_stack_ab(stack_a, stack_b, lis, len);
	return ;
}

void	sort_stack_b(t_list **stack_a, t_list **stack_b)
{
	int		best_number;

	while (ft_lstsize(*stack_b) > 0)
	{	
		best_number = find_best_nb(stack_a, stack_b);
		sort_final(stack_a, stack_b, best_number);
	}
	return ;
}

int	sort(t_list **stack_a, t_list **stack_b)
{
	int	*lis;
	int	*array_conv;
	int	len;

	if (check_sort(stack_a) != 0)
		return (1);
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	if (ft_lstsize(*stack_a) == 3)
		sort_3n(stack_a);
	array_conv = ft_lst_to_array(stack_a, ft_lstsize(*stack_a));
	lis = ft_lis(array_conv, ft_lstsize(*stack_a), &len);
	sort_stack_a(stack_a, stack_b, lis, len);
	sort_stack_b(stack_a, stack_b);
	while (ft_identity_test(stack_a) == 0)
		ft_rra(stack_a);
	free(array_conv);
	free(lis);
	return (0);
}
