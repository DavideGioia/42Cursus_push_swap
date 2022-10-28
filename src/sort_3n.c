/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:38:25 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/28 16:45:28 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_3n_firsec(int fir, int sec, int thi, t_list **stack)
{
	if (sec > thi)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (fir > thi)
	{
		ft_ra(stack);
	}
	else if (sec < thi)
	{
		ft_sa(stack);
	}
}

void	sort_3n_secfir(int fir, int sec, int thi, t_list **stack)
{
	if (fir > thi)
	{
		ft_rra(stack);
	}
	else if (sec > thi)
	{
		ft_sa(stack);
		ft_ra(stack);
	}	
}

void	sort_3n(t_list **stack)
{
	t_list	*tmp;
	t_num	num;

	tmp = *stack;
	num.fir = tmp->content;
	num.sec = tmp->next->content;
	num.thi = tmp->next->next->content;
	if (num.fir > num.sec)
		sort_3n_firsec(num.fir, num.sec, num.thi, stack);
	else if (num.fir < num.sec)
		sort_3n_secfir(num.fir, num.sec, num.thi, stack);
}

int	check_sort(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a);
		return (1);
	}
	if (ft_lstsize(*stack_a) == 3)
	{
		sort_3n(stack_a);
		return (1);
	}
	return (0);
}
