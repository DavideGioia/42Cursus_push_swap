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

int copy_list_onearg(char **argv, t_list **stack_a)
{
    char **copy_list;
    t_list *tmp;
    int i;

    i = 0;
    copy_list = ft_split(argv[1], ' ');
    while (copy_list[i])
    {
        tmp = ft_lstnew(ft_atoi(copy_list[i]));
        ft_lstadd_back(stack_a, tmp);
        i++;
    }
    return (0);
}

int copy_list(int argc, char **argv, t_list **stack_a)
{
    if (argc == 2)
        copy_list_onearg(argv, stack_a);
    return (0);
}