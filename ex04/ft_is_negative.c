/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <erwann.lagouche@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:39:30 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/11 14:50:37 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ch_p;
	char	ch_n;

	ch_p = 'P';
	ch_n = 'N';
	if (n >= 0)
	{
		write (1, &ch_p, 1);
		return ;
	}
	write (1, &ch_n, 1);
}

// int	main(void)
// {
// 	ft_is_negative(-100);
// }
