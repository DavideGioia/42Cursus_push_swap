/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:54 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/21 02:12:43 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_sa(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (tmp == NULL || tmp->next == NULL)
		return (1);
	swap(stack_a, tmp, tmp->next);
	count_moves(1);
	ft_printf("sa\n");
	return (0);
}

int	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	if (tmp == NULL)
		return (1);
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	count_moves(1);
	ft_printf("pa\n");
	return (0);
}

int	ft_ra(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (tmp == NULL)
		return (1);
	rotate(stack_a);
	count_moves(1);
	ft_printf("ra\n");
	return (0);
}

int	ft_rra(t_list **stack_a)
{
	if (*stack_a == NULL)
		return (1);
	reverse_rotate(stack_a);
	count_moves(1);
	ft_printf("rra\n");
	return (0);
}
