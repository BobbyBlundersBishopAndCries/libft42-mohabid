#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return (NULL);
	new -> next = *lst;
	*lst = new;
}
