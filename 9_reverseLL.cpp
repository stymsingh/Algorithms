#include <bits/stdc++.h>
using namespace std;
#define nodeptr node *
struct node
{
    int data;
    nodeptr next;
};

nodeptr print(nodeptr head)
{
    nodeptr cur = head;
    while (cur != NULL)
    {
        std::cout << cur->data << " -> ";
        cur = cur->next;
    }
    cout << "NULL";
}

// function to create a node
nodeptr newNode(int data)
{
    nodeptr nptr = new node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

void reverse(nodeptr *head)
{
    nodeptr cur = (*head);
    nodeptr prev = NULL;
    nodeptr next = NULL;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    (*head) = prev;
}

int main()
{
    nodeptr head = NULL;
    head = newNode(2);
    head->next = newNode(4);
    head->next->next = newNode(6);
    head->next->next->next = newNode(7);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(1);
    std::cout << "\n";
    print(head);

    cout << "\nReverse LL : ";
    reverse(&head);

    print(head);
}
