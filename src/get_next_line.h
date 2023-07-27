/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:08:58 by mcarneir          #+#    #+#             */
/*   Updated: 2023/05/10 15:16:38 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

size_t	ft_strlen(char *str);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_strchr(char *s, int c);
char	*ft_clean_stash(char *stash);
char	*ft_extract_line(char *stash);
char	*ft_read_file(int fd, char *stash);
char	*get_next_line(int fd);

#endif