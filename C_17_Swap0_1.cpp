#include<iostream>
using namespace std;

void Swap0_1(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i] == 0)
        { i++;  }
        if(arr[j] == 1)
        {   j--;  }
        if(arr[i]==1 && arr[j]==0)
        {  
           swap(arr[i],arr[j]);
           i++;
           j--;
        }      
    }
    int k=0;
    while(k<n)
    {
        cout<<arr[k]<<"\t";
        k++;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Swap0_1(arr,n);

}