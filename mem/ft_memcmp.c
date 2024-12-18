/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:35:18 by epascual          #+#    #+#             */
/*   Updated: 2024/10/01 15:55:26 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			iter;
	unsigned char	*s;
	unsigned char	*z;

	iter = 0;
	s = (unsigned char *)s1;
	z = (unsigned char *)s2;
	while (iter < n)
	{
		if (*s != *z)
		{
			return (*s - *z);
		}
		iter++;
		s++;
		z++;
	}
	return (0);
}
