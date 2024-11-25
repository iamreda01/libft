/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:58:36 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/19 06:04:57 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*z;
	size_t			i;

	i = 0;
	z = (unsigned char *)b;
	while (i < len)
	{
		z[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
