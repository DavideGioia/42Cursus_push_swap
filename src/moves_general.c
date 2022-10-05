/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_general.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:18:56 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/05 18:20:11 by dgioia           ###   ########.fr       */
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
