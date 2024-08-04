#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    int arr[50] , Arr[50];
    cout<<"Enter the values in the array:";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    
    for(int k=0,i=0 ; i<n,k<n ; k++,i++)
    {
        int max=arr[i];
        int c=1;
        for(int j=i+1 ; j<n;j++)
         {
                if(max<arr[j])
                {
                    max=arr[j];
                    c++;
                    cout<<arr[i]<<"\t"<<arr[j]<<endl;
                }
         }
        Arr[k] = c;
        
    }
    PrintArray(Arr , n);
    sort(Arr , Arr+n);
    int max1  = *max_element(Arr , Arr+n);
    cout<<"Longest Increasing Subsequence is:"<<max1;

}