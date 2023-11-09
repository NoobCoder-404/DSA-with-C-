// find Middle of a Linked List: https://bit.ly/3tRF3ga

#include <bits/stdc++.h>
#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

       class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

Node *findMiddle(Node *head)
{
    int len = getLength(head);
    int mid = len / 2 + 1;
    int cnt = 1;
    Node *temp = head;

    while (cnt < mid)
    {
        temp = temp->next;
        cnt++;
    }
    return temp;
}
