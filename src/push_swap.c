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

int	free_stuff(char **matrix)
{
	int	i;

	i = 0;
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

int	err_msg(void)
{
	ft_printf("Error\n");
	return (1);
}

int	father_checker(char **argv, t_list **stack_a, int i)
{
	if (check_args(argv, i) != 0)
	{
		if (i == 0)
			free_stuff(argv);
		return (err_msg());
	}
	if (check_and_save_list(argv, stack_a, i) != 0)
	{
		if (i == 0)
			free_stuff(argv);
		ft_lstdelall(stack_a);
		return (1);
	}
	return (0);
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
	if (father_checker(argv, &stack_a, i) == 1)
		return (1);
	sort(&stack_a, &stack_b);
	if (i == 0)
		free_stuff(argv);
	ft_lstdelall(&stack_a);
	return (0);
}
