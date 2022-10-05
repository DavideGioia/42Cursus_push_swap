/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:13:07 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/05 17:51:09 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	input_checker(int argc)
{
	int	i;

	i = 1;
	if (argc == 2)
		i = 0;
	return (i);
}

int	ft_identity_test(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (0);
	}
	exit (info_msg(1));
}
