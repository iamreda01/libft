/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:07:14 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/19 20:07:19 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		sign;
	int		len;

	nbr = n;
	len = intlen(nbr);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
		sign = 1;
	else
		sign = 0;
	if (sign)
	{
		(1) && (str[0] = '-', nbr = -nbr);
	}
	str[len] = '\0';
	while (len > sign)
	{
		str[len - 1] = (nbr % 10) + 48;
		(1) && (nbr /= 10, len--);
	}
	return (str);
}
