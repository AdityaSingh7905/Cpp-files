#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;

    // Node()
    // {
    //     data = 0;
    //     next = nullptr;
    // }

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

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *deleteLast(Node *head)
{
    Node *temp = head;
    if (head == NULL || head->next == nullptr)
        return NULL;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *node = temp->next;
    temp->next = nullptr;
    delete node;
    return head;
}

Node *deleteKthElement(Node *head, int K)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    Node *prev = NULL;
    if (K == 1)
    {
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == K)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *deleteElement(Node *head, int ele)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    Node *prev = NULL;
    if (head->data == ele)
    {
        head = head->next;
        delete temp;
        return head;
    }
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *arrToLL(vector<int> vec)
{
    Node *head = new Node(vec[0]);
    Node *mover = head;
    for (int i = 1; i < vec.size(); i++)
    {
        Node *temp = new Node(vec[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traverse(Node *head)
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
    vector<int> v = {12, 8, 9, 7, 11};
    Node *head = arrToLL(v);
    traverse(head);
    // Node *x = deleteHead(head);
    // Node *x = deleteLast(head);
    // Node* x = deleteKthElement(head, 4);
    Node* x = deleteElement(head, 11);
    traverse(x);
}