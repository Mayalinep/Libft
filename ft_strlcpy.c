/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:13:59 by maya              #+#    #+#             */
/*   Updated: 2024/05/25 17:07:11 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	i = 0;
	while (i < len - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if(argc != 4)
		return (0);
	printf("%zu\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
}
*/