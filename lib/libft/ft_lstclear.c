/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rallouan <rallouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:55:28 by rallouan          #+#    #+#             */
/*   Updated: 2023/04/09 16:02:37 by rallouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && *lst && del)
	{
		while (lst && *lst)
		{
			temp = *lst;
			(*lst) = (*lst)->next;
			ft_lstdelone(temp, del);
		}
	}
}
