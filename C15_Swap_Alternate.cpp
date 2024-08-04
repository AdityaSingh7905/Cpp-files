#include<iostream>
using namespace std;

void Swap_Alternate(int arr[],int n)
{
      int i = 0;
      
      while(i+1 < n)
      {  
            swap(arr[i],arr[i+1]);
            i+=2;

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

    Swap_Alternate(arr,n);

    cout<<"Alternate Reversed array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}