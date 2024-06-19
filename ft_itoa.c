/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:20:22 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/17 10:06:38 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len += 1;
	while (n)
	{
		n /= 10;
		len += 1;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long long	m;
	char		*result;

	len = ft_nbrlen(n);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	m = n;
	if (m == 0)
		result[0] = '0';
	if (m < 0)
	{
		result[0] = '-';
		m *= -1;
	}
	while (len-- > 0 && m > 0)
	{
		result[len] = (m % 10) + '0';
		m /= 10;
	}
	return (result);
}
