/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atodbl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:18:14 by epascual          #+#    #+#             */
/*   Updated: 2025/07/07 22:22:26 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Includes/libft.h"

static double	divtine(const char *s)
{
	double	ret;
	int		i;

	i = 0;
	ret = 1;
	while (s[i++] && (s[i] != '.' || s[i] != ','))
	{
		ret *= 10;
	}
	while (s[i++] && (s[i] == '0'))
		ret *= 10;
	return (ret);
}

//Convierte alpha a double
double	atodbl(const char *n)
{
	double	ret;
	double	neg;
	double	dec;
	int		i;

	i = 0;
	neg = 1;
	ret = 0;
	dec = 0;
	if (n[i] == '-')
		neg = -1;
	if (n[i] == '+' || n[i] == '-')
		i++;
	while (n[i] >= '0' && n[i] <= '9')
	{
		ret = ret * 10;
		ret = ret + n[i] - '0';
		i++;
	}
	if (n[i] == '.' || n[i] == ',')
		i++;
	if (n[i] >= '0' && n[i] <= '9')
		dec = atodbl(&n[i]) / divtine(&n[i]);
	return ((ret + dec) * neg);
}
