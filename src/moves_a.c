/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:54 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/07 12:33:02 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_sa(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (tmp == NULL || tmp->next == NULL)
		return (1);
	swap_nodes(stack_a, tmp, tmp->next);
	ft_printf("sa\n");
	return (0);
}

int	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_printf("pa\n");
	return (0);
}
