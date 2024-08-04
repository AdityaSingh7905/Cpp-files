#include<iostream>
using namespace std;

void LinearSearch(int arr[],int size,int key)
{
    int i=0;
    int c=0;
    while(i<size)
    {
       if(arr[i]==key)
       {
         c=1;
       }
       i++;
    }

    if(c==1)
    {
        cout<<"Searched element is present in the array..";
    }
    else
    {
        cout<<"Searched element is not present in the array..";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter the values in array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout<<endl;

    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;


    LinearSearch(arr,n,key);
}