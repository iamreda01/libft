/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:11:36 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/20 02:10:04 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(long long res, int sign, const char *str)
{
	if (sign > 0 && (res > (9223372036854775807LL - (*str - '0')) / 10))
		return (-1);
	if (sign < 0 && (-res < (-9223372036854775807LL - 1 + (*str - '0')) / 10))
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	res;
	int			vcheck;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		vcheck = check(res, sign, str);
		if (vcheck != 1)
			return (vcheck);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
