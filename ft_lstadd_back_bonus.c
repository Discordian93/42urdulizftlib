#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current_node;

	if (lst == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current_node = *lst;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new;
}