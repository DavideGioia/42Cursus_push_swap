/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:54 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/05 18:25:59 by dgioia           ###   ########.fr       */
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
