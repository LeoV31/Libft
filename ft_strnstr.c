/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:51:25 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/13 15:20:07 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;

	lit_len = ft_strlen(little);
	if (lit_len == 0)
		return ((char *)big);
	while (*big && len >= lit_len)
	{
		if (ft_strncmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
