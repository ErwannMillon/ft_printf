#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	**ret;

	new = NULL;
	ret = &new;
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(ret, del);
			return (NULL);
		}
		new->content = f(lst->content);
		lst = lst->next;
	}
	new = NULL;
	return (*ret);
}
