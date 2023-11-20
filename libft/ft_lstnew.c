#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = malloc(sizeof(*tab));
	if (!tab)
		return (NULL);
	tab->content = content;
	tab->next = NULL;
	return (tab);
}
