/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_general.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:56 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/07 12:16:18 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap_nodes(t_list	**head_ref, t_list *curr, t_list *second)
{
	t_list	*tmp;

	if (curr == NULL || curr->next == NULL)
		return ;
	*head_ref = second;
	tmp = second->next;
	second->next = curr;
	curr->next = tmp;
}

int	ft_ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	swap_nodes(stack_a, tmp_a, tmp_a->next);
	swap_nodes(stack_b, tmp_b, tmp_b->next);
}
