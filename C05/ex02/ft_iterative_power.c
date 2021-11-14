/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohamme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:18:11 by mmohamme          #+#    #+#             */
/*   Updated: 2021/10/03 20:26:22 by mmohamme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	prev;

	i = 1;
	prev = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			nb *= prev;
			i++;
		}
	}
	return (nb);
}
