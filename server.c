/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:45:41 by huozkale          #+#    #+#             */
/*   Updated: 2023/12/07 15:50:46 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_signal(int signal)
{
	static char	c = 0;
	static int	i = 0;

	if (signal == SIGUSR1)
		c |= (1 << i);
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		ft_printf("pid %d\n", getpid());
		signal(SIGUSR1, ft_signal);
		signal(SIGUSR2, ft_signal);
		while (1)
		{
			pause();
		}
	}
	else
	{
		write(2, "error!", 7);
		exit(1);
	}
}
