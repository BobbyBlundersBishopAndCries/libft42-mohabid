#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}
