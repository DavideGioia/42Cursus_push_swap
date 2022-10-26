/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_support.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:23:39 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/26 17:06:30 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(t_list	**head_ref, t_list *curr, t_list *second)
{
	t_list	*tmp;

	if (curr == NULL || curr->next == NULL)
		return ;
	*head_ref = second;
	tmp = second->next;
	second->next = curr;
	curr->next = tmp;
}

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = *stack;
	*stack = (*stack)->next;
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp;
	tmp->next = NULL;
}

void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*second_last;

	first = *stack;
	second_last = *stack;
	while (second_last->next->next)
	{
	second_last = second_last->next;
	}
	last = second_last->next;
	second_last->next = NULL;
	last->next = first;
	*stack = last;
}

void	simple_moves(t_list **stack_a, t_list **stack_b, int n_a, int n_b)
{
	while (n_a > 0)
	{
		ft_ra(stack_a);
		n_a--;
	}
	while (n_a < 0)
	{
		ft_rra(stack_a);
		n_a++;
	}
	while (n_b > 0)
	{
		ft_rb(stack_b);
		n_b--;
	}
	while (n_b < 0)
	{
		ft_rrb(stack_b);
		n_b++;
	}
}

void	double_rotate(t_list **stack_a, t_list **stack_b, int n_a, int n_b)
{
	if (n_a < 0)
	{
		while (n_a < 0 || n_b < 0)
		{
			ft_rrr(stack_a, stack_b);
			n_a++;
			n_b++;
		}
	}
	else
	{
		while (n_a > 0 || n_b > 0)
		{
			ft_rr(stack_a, stack_b);
			n_a--;
			n_b--;
		}
	}
	simple_moves(stack_a, stack_b, n_a, n_b);
}
