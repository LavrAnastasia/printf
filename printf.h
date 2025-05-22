/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:29:27 by alavrukh          #+#    #+#             */
/*   Updated: 2025/05/22 16:26:38 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define BASE16L "0123456789abcdef"
# define BASE16U "0123456789ABCDEF"
# define BASE10 "0123456789"

int ft_printf(const char *str, ...);
int ft_putchar	(char c);
int ft_write_str (char *str);

#endif 