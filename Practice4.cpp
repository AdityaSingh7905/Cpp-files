#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    /*int i=1;
    while(i<=n)
    {
        int j=1;
        int count=1;
        int num=i-1;
        while(j<= 2*n-1)
        {
            if(j<n-i+1)
            {
                cout<<" "<<"\t";
            }
            else if(j>=n-i+1 && j<=n)
            {   
                cout<<count<<"\t";
                count++;
            }
            else if(j<=n+i-1)
            {
                cout<<num<<"\t";
                num--;
            }
            else
            {
                cout<<" "<<"\t";
            }
            j++;
        }
        cout<<endl;
        i++;
    } */

    int i=1;
    while(i<=n)
    {
        int j=1;
        int count=n-i+1;
        while(j<=2*n)
        {
            if(j<=n-i+1)
            {
                cout<<j<<"\t";
            }
            else if(j>n-i+1 && j<=n)
            {
                cout<<"*"<<"\t";
            }
            else if(j>n && j<n+i)
            {
                cout<<"*"<<"\t";
            }
            else
            {
                cout<<count<<"\t";
                count--;
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}