/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epascual <epascual@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:04:22 by epascual          #+#    #+#             */
/*   Updated: 2025/07/08 01:06:25 by epascual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	ft_printlist(t_list *a)
{
	int	tmp;

	if (a == NULL)
		return ;
	while (a)
	{
		tmp = (*(long *)(a->content));
		ft_printf("%d\n", tmp);
		a = a->next;
	}
}
