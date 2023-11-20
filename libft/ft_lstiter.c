#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;

	if (!lst || !f)
		return ;
	f(lst->content);
	while (lst->next)
	{
		list = lst->next;
		f(list->content);
		lst = list;
	}
}
