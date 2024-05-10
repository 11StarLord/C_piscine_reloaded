/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:28:56 by djoao             #+#    #+#             */
/*   Updated: 2024/05/06 11:29:26 by djoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (result * result <= nb && result <= 46340)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
