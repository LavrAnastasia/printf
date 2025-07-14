/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alavrukh <alavrukh@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:29:27 by alavrukh          #+#    #+#             */
/*   Updated: 2025/06/06 15:10:09 by alavrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

# define BASE16L "0123456789abcdef"
# define BASE16U "0123456789ABCDEF"
# define BASE10 "0123456789"

int	ft_printf(const char *str, ...);
int	ft_format(const char *str, va_list *argc);
int	ft_write_str(char *str);
int	ft_write_base(unsigned long num, unsigned int base, char *str);
int	ft_write_int(long num);
int	ft_write_ptr(void *ptr);

#endif 