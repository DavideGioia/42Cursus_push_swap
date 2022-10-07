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

int	temporary_stack_b(char **argv, t_list **stack_b, int i)
{
	t_list	*tmp;

	while (argv[i])
	{
		tmp = ft_lstnew((int *)ft_atoi(argv[i]));
		ft_lstadd_back(stack_b, tmp);
		i++;
	}
	ft_identity_test(stack_b);
	return (0);
}

// va in crash, va sistemata o rimossa
void	stack_printer(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = stack_a;
	tmp2 = stack_b;
	ft_printf("stack A\t\tstack B\n");
	while (ft_lstsize(tmp1) > 1)
	{
		ft_printf("|\t%i\t|\t%i\n", tmp1->content, tmp2->content);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
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
	sort(&stack_a, &stack_b);
	stack_printer(stack_a, stack_b);
	return (0);
}
