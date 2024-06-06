/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:25:48 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/03 18:11:55 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_slices(const char *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++count;
		while (*s && *s != sep)
			++s;
	}
	return (count);
}

static void	place_slices(char **tab, char const *s, char sep)
{
	char		**res;
	char const	*tmp;

	res = tab;
	tmp = s;
	while (*s)
	{
		while (*s == sep)
		{
			s++;
			tmp = s;
		}
		while (*tmp && *tmp != sep)
			tmp++;
		if (*tmp == sep || tmp > s)
		{
			*res = ft_substr(s, 0, tmp - s);
			s = tmp;
			res++;
		}
	}
	*res = NULL;
}

char	**ft_split(char const *s, char sep)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((count_slices(s, sep) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	place_slices(res, s, sep);
	return (res);
}
