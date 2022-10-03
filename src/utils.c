/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:13:07 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/03 17:13:22 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char **split_argv(int argc, char **argv)
{
    int size;
    char **arg;

    arg = NULL;
    size = 0;
    arg = ft_split(argv[1], ' ');
    while (arg[size] != NULL)
        size++;

    return (arg);
}
