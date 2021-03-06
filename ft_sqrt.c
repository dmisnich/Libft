/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:51:31 by dmisnich          #+#    #+#             */
/*   Updated: 2017/11/23 18:51:33 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int l;
	int r;
	int m;

	l = 0;
	r = 46340;
	while (l <= r)
	{
		m = (l + r) / 2;
		if ((m * m) == nb)
			return (m);
		else if (m * m > nb)
			r = m - 1;
		else
			l = m + 1;
	}
	return (0);
}
