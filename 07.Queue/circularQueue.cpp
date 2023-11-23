/*
Circular Queue :https://bit.ly/34xocVZ
*/

#include <bits/stdc++.h>
class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        { // queue full
            return false;
        }
        else if (front == -1)
        { // insert first element
            front = rear = 0;
            // arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        { // rear position before front position
            rear = 0;
            // arr[rear] = value;
        }
        else
        {
            rear++;
            // arr[rear] = value;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        if (front == -1)
        { // queue empty
            // cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        { // single element
            front = rear = -1;
        }
        else if (front == size - 1)
        { // front position is in last
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
};