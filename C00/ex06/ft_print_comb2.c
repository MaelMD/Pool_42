/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:04:24 by mmohamme          #+#    #+#             */
/*   Updated: 2021/09/24 10:05:09 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			write(1, " ", 1);
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
		}
		i++;
	}
}
