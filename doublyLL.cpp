#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}

Node *deleteLast(Node *head)
{
    Node *temp = head;
    if (head == NULL || head->next == NULL)
        return NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *x = temp->prev;
    x->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}

Node *deleteKthElement(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *back = temp->prev;
    Node *front = temp->next;
    if (back == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (back == NULL)
    {
        front->prev = nullptr;
        temp->next = nullptr;
        delete temp;
        head = front;
    }
    else if (front == NULL)
    {
        back->next = nullptr;
        temp->prev = nullptr;
        delete temp;
    }
    else
    {
        back->next = front;
        front->prev = back;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
    }
    return head;
}

void deleteNode(Node *node)
{
    Node *back = node->prev;
    Node *front = node->next;
    if (front == NULL)
    {
        back->next = nullptr;
        node->prev = nullptr;
        delete node;
        return;
    }

    back->next = front;
    front->prev = back;

    node->next = nullptr;
    node->prev = nullptr;

    delete node;
}

Node *insertHead(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

Node *insertLast(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *node = head;
    while (node->next != NULL)
    {
        node = node->next;
    }
    node->next = temp;
    temp->prev = node;
    return head;
}

Node *insertKthIndex(Node *head, int k, int x)
{
    Node *temp = new Node(x);
    Node *node = head;
    int cnt = 0;
    while (node != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        node = node->next;
    }
    Node *back = node->prev;
    Node *front = node->next;
    if (back == NULL)
    {
        temp->next = node;
        node->prev = temp;
        head = temp;
        return head;
    }
    temp->prev = back;
    back->next = temp;

    temp->next = node;
    node->prev = temp;

    return head;
}

Node *convertToDLL(vector<int> v)
{
    Node *head = new Node(v[0]);
    Node *temp = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *x = new Node(v[i], nullptr, temp);
        temp->next = x;
        temp = x;
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
    Node *head = convertToDLL(v);
    print(head);
    // Node *node = deleteHead(head);
    // Node *node = deleteLast(head);
    // Node *node = deleteKthElement(head, 3);
    // print(node);
    // deleteNode(head->next->next->next);
    // head = insertHead(head, 17);
    // head = insertLast(head, 19);
    head = insertKthIndex(head, 1, 15);
    head = insertKthIndex(head, 2, 6);
    head = insertKthIndex(head, 6, 23);
    head = insertKthIndex(head, 5, 10);
    print(head);
}