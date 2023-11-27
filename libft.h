/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteizag <esteizag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:16:55 by esteizag          #+#    #+#             */
/*   Updated: 2023/11/27 16:16:56 by esteizag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
size_t ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
size_t ft_strlcpy(char * dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char * dst, const char *src, size_t dstsize);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	*ft_memset(void *ptr, int x, size_t len);
