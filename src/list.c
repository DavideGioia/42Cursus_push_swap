/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:39:18 by dgioia            #+#    #+#             */
/*   Updated: 2022/09/25 20:39:18 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	save_list(char **argv, t_list **stack_a, int i)
{
	t_list	*tmp;

	while (argv[i])
	{
		tmp = ft_lstnew((int *)ft_atoi(argv[i]));
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	if (ft_identity_test(stack_a) == 1)
		exit (info_msg(1));
	return (0);
}
