#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *head;
	t_list	*current_node;
	t_list	*new_node;

	if (lst == NULL)
	{
		return (NULL);
	}
	head = malloc(sizeof(t_list));
	if (head == NULL)
	{
		return (NULL);
	}
	head->content = f(lst->content);
	head->next = NULL;
	current_node = head;
	lst = lst->next;
	while (lst != NULL)
	{
		new_node = malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		current_node->next = new_node;
		current_node = new_node;
		lst = lst->next;
	}
	return (head);
}
