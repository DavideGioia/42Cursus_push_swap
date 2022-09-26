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

int check_duplicates(int argc, char **argv)
{
    int i;
    int j;
    int k;

    i = 1;
    k = 1;
    while (argv[i])
    {
        j = ft_atoi(argv[i]);
        k = i + 1;
        while (argv[k])
        {
            if (j == ft_atoi(argv[k++]))
                return (err_msg(3));
        }
        i++;
    }
    return (0);
}

int check_digit(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    while (++i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] == '-' || argv[i][j] == '+')
                j++;
            if (ft_isdigit(argv[i][j++]) == 0)
                return (err_msg(2));
        }
    }
    return (0);
}

int check_args(int argc, char **argv)
{
    if (argc >= 2)
    {
        if (check_digit(argc, argv) == 0)
            check_duplicates(argc, argv);
    }
    else
        return (err_msg(1));

    return (0);
}
