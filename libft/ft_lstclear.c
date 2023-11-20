#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!lst || !del)
		return ;
	while (lst[0])
	{
		list = lst[0]->next;
		ft_lstdelone(lst[0], del);
		lst[0] = list;
	}
}
