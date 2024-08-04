#include<iostream>
using namespace std;

void SumofArray(int arr[],int size)
{
    int sum = 0;
    int i=0;
    while(i<size)
    {
        sum+= arr[i];
        i++;
    }

    cout<<"The sum of all elements in array is: "<<sum<<endl;
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

    SumofArray(arr,n);
}