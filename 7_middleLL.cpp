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

int findMiddleNode(nodeptr head)
{
    nodeptr slow = head;
    nodeptr fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main()
{
    nodeptr head = NULL;
    head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    std::cout << "\n";
    print(head);

    cout << "\nMiddle of the LL is: " << findMiddleNode(head) << endl;
}
