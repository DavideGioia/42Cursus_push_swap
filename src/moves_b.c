/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:51 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/07 12:12:36 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_sb(t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	swap_nodes(stack_b, tmp, tmp->next);
	ft_printf("sb");
	return (0);
}