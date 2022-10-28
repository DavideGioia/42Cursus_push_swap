/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:13:07 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/27 15:26:18 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	input_checker(int argc)
{
	int	i;

	i = 1;
	if (argc == 1)
		exit (0);
	else if (argc == 2)
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
	return (1);
}

int	*ft_lst_to_array(t_list **stack, int dim)
{
	t_list	*tmp;
	int		i;
	int		*array;

	tmp = *stack;
	if (tmp == NULL)
		return (0);
	i = 0;
	array = (int *) malloc (sizeof(int) * (dim + 1));
	while (i < dim)
	{
		array[i] = (int)tmp->content;
		tmp = tmp->next;
		i++;
	}
	array[i] = '\0';
	return (array);
}

int	find_num(int num, int *lis, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (lis[i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_abs_value(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
