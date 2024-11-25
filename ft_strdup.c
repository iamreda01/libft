/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:06:17 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/16 22:30:01 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tab;
	size_t	s1len;

	s1len = ft_strlen(s1) + 1;
	tab = malloc(sizeof(char) * s1len);
	if (tab == NULL)
		return (NULL);
	ft_strlcpy(tab, s1, s1len);
	return (tab);
}
