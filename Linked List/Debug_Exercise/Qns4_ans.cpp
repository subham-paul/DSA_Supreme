void rotate(Node *head, int k)
{
    if (k == 0)
        return;
    Node *current = head;

    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return;

    Node *kthNode = current;
    while (current->next != NULL)
        current = current->next;

    current->next = head;
    head = kthNode->next;
    kthNode->next = NULL;
}