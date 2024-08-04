#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int a = 0;
    int b = 1;
    cout<<a<<"  "<<b<<"\t"; 
    for(int i=1;i<=n;i++)
    {
        int sum = a+b;
        cout<<sum<<"\t";
        a=b; 
        b=sum;
    }
}