/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:28:22 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/24 21:47:59 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lem_in.h"
#include "lst.h"

void	free_room(void *room, size_t size)
{
	if (!room)
		return ;
	(void)size;
	free(((t_room *)room)->name);
	ft_dlstdel(&((t_room *)room)->neighbours, NULL);
	free(room);
}
