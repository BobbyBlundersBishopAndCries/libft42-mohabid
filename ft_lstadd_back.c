#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct list_t	last;

	if(*lst != NULL)
	{
		*lst = new;
		return;
	}
	last = *lst;
	while (last -> next != NULL)
		last = last -> next;
	last -> next = new;
}
