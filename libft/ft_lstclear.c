#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *successor;

	temp = *lst;
	while (temp)
	{
		successor = temp -> next;
		del (temp -> content);
		free (temp);
		temp = successor;
	}
	*lst = NULL;
}
