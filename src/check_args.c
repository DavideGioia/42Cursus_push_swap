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

int	check_duplicates(char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 1;
	while (argv[i])
	{
		j = ft_atoi(argv[i]);
		k = i + 1;
		while (argv[k])
		{
			if (j == ft_atoi(argv[k++]))
				exit (err_msg(3));
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
				exit (err_msg(4));
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (ft_isdigit(argv[i][j++]) == 0)
				exit (err_msg(2));
		}
		i++;
	}
	return (0);
}

int	check_args(char **argv, int i)
{
	if (check_digit(argv, i) == 0)
		check_duplicates(argv);
	else
		exit (err_msg(1));
	return (0);
}
