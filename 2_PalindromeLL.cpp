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

bool isPalindrome(nodeptr head)
{
    stack<int> s;
    nodeptr cur = head;
    while (cur != NULL)
    {
        s.push(cur->data);
        cur = cur->next;
    }

    cur = head;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        if (cur->data != top)
        {
            return false;
        }
        cur = cur->next;
    }
    return true;
}

int main()
{
    nodeptr head = NULL;
    head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(2);
    head->next->next->next->next = newNode(1);
    std::cout << "\n";
    print(head);
    bool ans = isPalindrome(head);
    if (ans == 0)
    {
        cout << "\nis Palindrome ? "
             << "false" << endl;
    }
    else
    {
        cout << "\nis Palindrome ? "
             << "true" << endl;
    }

    cout << "\nMiddle of the LL is: " << findMiddleNode(head) << endl;
}
