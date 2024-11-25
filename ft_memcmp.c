/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:09:17 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/16 22:33:54 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uns_s1;
	unsigned char	*uns_s2;

	uns_s1 = (unsigned char *)s1;
	uns_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*uns_s1 != *uns_s2)
			return (*uns_s1 - *uns_s2);
		uns_s1++;
		uns_s2++;
	}
	return (0);
}
