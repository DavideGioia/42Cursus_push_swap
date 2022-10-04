/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:00:59 by dgioia            #+#    #+#             */
/*   Updated: 2022/09/26 17:00:59 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	err_msg(int err)
{
	if (err == 1)
		return (ft_printf("ERRORE: non ci sono abbastanza numeri\n"));
	else if (err == 2)
		return (ft_printf("ERRORE: i numeri inseriti non sono validi\n"));
	else if (err == 3)
		return (ft_printf("ERRORE: ci sono numeri duplicati\n"));
	else if (err == 4)
		return (ft_printf("ERRORE: il numero supera i limiti consentiti\n"));
	return (0);
}
