#include "lists.h"

/**
* check_cycle - function that checks if list has cycle
* @list: pointer to check
* Return: On success 1
*/
int check_cycle(listint_t *list)
{
	listint_t *su;

	if (!list)
	{
		return (0);
	}

	while (list)
	{
		su = list;
		list = list->next;

		if (su <= list)
		{
			return (1);
		}
	}
	return (0);
}
