/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprintf3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:45:21 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/02 13:45:22 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"
#include <limits.h>

int main (void)
{
	int my;
	int their;
	printf("------------test no conversions-------------\n");
	my = ft_printf("cat calculate\n");
	their = printf("cat calculate\n");
	printf("My:%d VS Their:%d\n\n\n", my, their);

	printf("------------empty printf-------------\n");
	my = ft_printf("");
	their = printf("");
	printf("My:%d VS Their:%d\n\n\n", my, their);
}