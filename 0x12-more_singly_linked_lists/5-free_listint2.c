void free_listint2(listint_t **head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while (*head->next != NULL)
	{
		temp = *head->next
		free(*head);
		*head = temp;
	}
	free(*head);

	head = NULL;
}
