/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:51 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/27 15:27:39 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_sb(t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	swap(stack_b, tmp, tmp->next);
	ft_printf("sb");
	return (0);
}

int	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (tmp == NULL)
		return (1);
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_printf("pb\n");
	return (0);
}

int	ft_rb(t_list **stack_b)
{
	if (*stack_b == NULL)
		return (1);
	rotate(stack_b);
	ft_printf("rb\n");
	return (0);
}

int	ft_rrb(t_list **stack_b)
{
	if (*stack_b == NULL)
		return (1);
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
	return (0);
}
