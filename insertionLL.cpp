#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
    return head;
}

Node *insertLast(Node *head, int k)
{
    Node *node = new Node(k);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = node;
    return head;
}

Node *insertAtK(Node *head, int k, int x)
{
    Node *node = new Node(x);
    if (head == NULL && k == 1)
        return node;
    if (k == 1)
    {
        node->next = head;
        head = node;
        return head;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            node->next = temp->next;
            temp->next = node;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeElement(Node *head, int ele, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *node = head;
    if (head->data == ele)
    {
        temp->next = head;
        head = temp;
        return head;
    }
    Node *prev;
    while (node != NULL)
    {
        if (node->data == ele)
        {
            prev->next = temp;
            temp->next = node;
        }
        prev = node;
        node = node->next;
    }
    return head;
}

Node *arrToLL(vector<int> v)
{
    Node *head = new Node(v[0]);
    Node *temp = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *node = new Node(v[i]);
        temp->next = node;
        temp = node;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    vector<int> v = {12, 8, 9, 7};
    Node *head = arrToLL(v);
    print(head);
    // Node * node = insertHead(head, 17);
    // Node *node = insertLast(head, 17);
    // Node *node = insertAtK(head, 6, 17);
    Node *node = insertBeforeElement(head, 7, 17);
    print(node);
}