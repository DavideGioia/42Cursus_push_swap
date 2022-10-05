/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:14:29 by dgioia            #+#    #+#             */
/*   Updated: 2022/09/24 17:14:29 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	stack_printer(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = stack_a;
	tmp2 = stack_b;
	ft_printf("stack A\n");
	while (tmp1)
	{
		ft_printf("|\t%i\n", tmp1->content);
		tmp1 = tmp1->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = input_checker(argc);
	if (i == 0)
		argv = ft_split(argv[1], ' ');
	check_args(argv, i);
	save_list(argv, &stack_a, i);

	stack_printer(stack_a, stack_b);
	return (0);
}
