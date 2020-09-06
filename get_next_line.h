/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:46:03 by ebresser          #+#    #+#             */
/*   Updated: 2020/08/07 20:46:56 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h> //READ
# include <sys/uio.h> //READ
# include <fcntl.h> //OPEN
# include <stdio.h> //PRINTF
# include <stdlib.h> //MALLOC
# include <unistd.h> //CLOSE
# include <limits.h> //OPEN_MAX

int		ft_strlen(const char *s);
void	strfree(char **s);
void    strcopy(char **dst, char **src, int start_src, int start_dst);
int		ft_strappend(char **dst_line, char **add_buff);
int		creatline(char **buf, char **rest, char **line);
int		get_next_line(int fd, char **line);

#endif


