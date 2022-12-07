#include 'list.h'

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*listCheck;

	listCheck = begin_list;
	while (listCheck)
	{
		listCheck->data = (*f)(listCheck->data);
		listCheck = listCheck->next
	}
}
