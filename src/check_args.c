/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:30:43 by dgioia            #+#    #+#             */
/*   Updated: 2022/09/24 19:30:43 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_and_save_list(char **argv, t_list **stack_a, int i)
{
	t_list	*tmp;

	while (argv[i])
	{
		tmp = ft_lstnew((int)ft_atoi(argv[i]));
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	if (ft_identity_test(stack_a) == 1)
		return (1);
	return (0);
}

int	check_duplicates(char **argv, int i)
{
	int	j;
	int	k;

	k = 1;
	while (argv[i])
	{
		j = ft_atoi(argv[i]);
		k = i + 1;
		while (argv[k])
		{
			if (j == ft_atoi(argv[k++]))
				return (1);
		}
		i++;
	}
	return (0);
}

int	check_digit(char **argv, int i)
{
	int	j;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648)
				return (1);
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (ft_isdigit(argv[i][j++]) == 0)
				return (2);
		}
		i++;
	}
	return (0);
}

int	check_args(char **argv, int i)
{
	if (check_digit(argv, i) == 0)
	{
		if (check_duplicates(argv, i) == 1)
			return (1);
	}
	else
	{
		return (1);
	}
	return (0);
}
