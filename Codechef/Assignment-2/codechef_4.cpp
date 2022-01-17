// Code By 20DCE019 - Yatharth Chauhan

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int getNthNodeFromEnd(struct Node *head, int n)
{
    int length = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    temp = head;

    for (int i = 1; i < length - n + 1; i++)
        temp = temp->next;

    return temp->data;
}