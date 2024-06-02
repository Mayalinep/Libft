/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:25:48 by mpelage           #+#    #+#             */
/*   Updated: 2024/06/02 11:23:06 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char sep)
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
static void	cut_place(char **tab, const char *s, char sep)
{
	char	**res;

	res = tab;
	while (*s)
	{
	}
}

char	**ft_split(char const *s, char c)
{
}