/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:31:59 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/13 15:38:52 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*result;

	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (0);
	ft_strlcpy (result, s, ft_strlen(s) + 1);
	return (result);
}
