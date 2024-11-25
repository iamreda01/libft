/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:00:19 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/17 04:31:14 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;

	if (count != 0 && size > 18446744073709551615UL / count)
		return (NULL);
	tab = malloc(sizeof(char) * (count * size));
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, (size * count));
	return (tab);
}
