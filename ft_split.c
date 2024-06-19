/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lviguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:37:07 by lviguier          #+#    #+#             */
/*   Updated: 2024/06/18 12:31:38 by lviguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_count_words(char const *s, char sep)
{
	int	count;
	int	new_word;

	count = 0;
	new_word = 1;
	while (*s)
	{
		if (*s == sep)
			new_word = 1;
		else if (new_word == 1)
		{
			new_word = 0;
			count++;
		}
		s++;
	}
	return (count);
}

void	ft_allocate(char **result, char const *s, char sep)
{
	char const	*tmp;
	char		**result_tmp;

	tmp = s;
	result_tmp = result;
	while (*tmp)
	{
		while (*s == sep)
			s++;
		tmp = s;
		while (*tmp && *tmp != sep)
			tmp++;
		if (tmp > s)
		{
			*result_tmp = ft_substr(s, 0, tmp - s);
			s = tmp;
			result_tmp++;
		}
	}
	*result_tmp = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	result = malloc((size + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_allocate(result, s, c);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char const *s=" hello del lim mitter";
	char c = ' ';
	char **result;
	int i;

	result = ft_split(s, c);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}
*/
