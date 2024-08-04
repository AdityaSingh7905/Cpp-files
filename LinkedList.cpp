#include<iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* node;

    Node(int data1, Node* node1){
        data = data1;
        node = node1;
    }

    Node(int data1){
        data = data1;
        node = nullptr;
    }
};


int main(){
    int arr[4] = {12, 8, 7, 9};
    // Node n = Node(arr[0]);
    Node* head = new Node(arr[3]);
    cout<<head->data;
}