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

int	free_stuff(t_list *node, char **matrix)
{
	int	i;

	i = 0;
	if (node != NULL)
	{
		free(node);
		node = NULL;
	}
	if (matrix != NULL)
	{
		while (matrix[i])
		{
			free(matrix[i++]);
		}
		free(matrix);
		matrix = NULL;
	}
	return (0);
}


int	err_msg()
{
	ft_printf("Error\n");
	return (0);
}

// da levare
void	stack_printer(t_list *stack_a)
{
	t_list	*tmp1;

	tmp1 = stack_a;
	ft_printf("stack A\n");
	while (ft_lstsize(tmp1) > 0)
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
	if (check_args(argv, i) != 0 || check_and_save_list(argv, &stack_a, i) != 0)
	{
		free_stuff(NULL, argv);
		ft_lstdelall(&stack_a);
		return (0);
	}
	sort(&stack_a, &stack_b);
	// da levare
	stack_printer(stack_a);
	// da levare
	ft_printf("MOSSE EFFETTIVE: %i\n", count_moves(0));
	ft_lstdelall(&stack_a);
	return (0);
}
