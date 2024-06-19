/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:20:25 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/12 17:29:47 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
