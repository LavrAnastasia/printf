/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:34:28 by alavrukh          #+#    #+#             */
/*   Updated: 2025/05/22 16:17:28 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar (char c)
{
	return (write (1, &c, 1));
}

int ft_write_str (char *str)
{
	int all_letter;
	int string;

	if (!str)
		return (write(1, "(null)", 6));
	all_letter = 0;
	string = 0;

	while (*str)
	{
		string = write (1, str, 1);
		if (string == -1)
			return (-1);
		all_letter++;
		string++;
	}
	return (all_letter);
}

//int ft_write_base 