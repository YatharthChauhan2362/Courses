// Code By 20DCE019 - Yatharth Chauhan

struct Node
{
    int data;
    struct Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *merge(Node *head1, Node *head2)
{

    Node *result = NULL;

    if (head1 == NULL)
        return (head2);
    else if (head2 == NULL)
        return (head1);

    if (head1->data <= head2->data)
    {
        result = head1;
        result->next = merge(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = merge(head1, head2->next);
    }
    return (result);
}
