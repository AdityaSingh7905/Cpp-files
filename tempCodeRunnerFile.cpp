#include<iostream>
using namespace std;

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Sort0_1_2(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i] == 0)
        {
            i++;
        }
        if(arr[j] == 2)
        {
            j--;
        }
        if(arr[i]==1 && arr[j]==0 || arr[i]==2 && arr[j]==1 || arr[i]==2 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }

    PrintArray(arr,n);
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Sort0_1_2(arr,n);
}