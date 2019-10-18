#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;
	t_list *temp;

	temp = lst;
	while (temp)
	{
		if( !(temp -> next))
			last = temp;
		temp = temp -> next;
	}
	return (last);
}
