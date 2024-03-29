/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:51:28 by namra             #+#    #+#             */
/*   Updated: 2024/01/12 20:48:49 by namra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;
	int	i;

	i = 1;
	sqr = i * i;
	if (nb <= 0)
		return (0);
	while (sqr <= nb && sqr > 0)
	{
		if (sqr == nb)
			return (i);
		i++;
		sqr = i * i;
	}
	return (0);
}
