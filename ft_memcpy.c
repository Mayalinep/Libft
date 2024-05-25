/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpelage <mpelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:14:25 by maya              #+#    #+#             */
/*   Updated: 2024/05/25 17:05:42 by mpelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*ptr;
	const char	*sptr;

	ptr = (char *)dst;
	sptr = (const char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = sptr[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <unistd.h>

void	*memcpy(void *restrict dst, const void *restrict src, size_t n);

int	main(void) {
	char src[12] = "Hello, GPT!";
	char dst[12] = {0};  // Destination array, uninitialized

	printf("Before memcpy:\n");
	printf("src : %s\n", src);  // Display the source array
	printf("dst : %s\n", dst); 
		// This may print garbage or cause a crash due to uninitialized data

	memcpy(dst, src, sizeof(src));

	printf("After memcpy:\n");
	printf("src : %s\n", src);  // Display the source array again
	printf("dst : %s\n", dst);  // Now this should print "Hello,
		GPT!" just like src

	return (0);
}
*/