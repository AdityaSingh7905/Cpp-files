#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size)
{
    int temp;
    int i=0,j=0;
    for(i=0,j=size-1;i<(size/2),j>=(size/2);i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    return ;
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

    ReverseArray(arr,n);

    cout<<"Reversed array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}