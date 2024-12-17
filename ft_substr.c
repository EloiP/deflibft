/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:36:30 by epascual          #+#    #+#             */
/*   Updated: 2024/10/09 17:11:02 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*st;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		len = 0;
		start = ft_strlen(s);
	}
	if (ft_strlen(s + start) <= len)
		len = ft_strlen(s + start);
	st = (char *)s;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, &st[start], len + 1);
	return (res);
}
