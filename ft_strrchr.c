/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:42:32 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/13 12:51:33 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;

	t = NULL;
	while (*s)
	{
		if (*s == (char)c)
			t = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)t);
}
