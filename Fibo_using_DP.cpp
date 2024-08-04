#include<iostream>
using namespace std;

int fibonacci_using_DP(int arr[],int n)
{
    if(n<=1)
      return arr[n] = n;
    
    if(arr[n] != -1)
      return arr[n];

    else {
        arr[n] = fibonacci_using_DP(arr,n-2) + fibonacci_using_DP(arr,n-1);
        cout<<fibonacci_using_DP(arr,n-2)<<"\t"<<fibonacci_using_DP(arr,n-1)<<"\t"<<arr[n];
        return arr[n]; }
}

int Fibonacci_Tabulation(int n)
{   
    int F[n+1];
    if(n<=1)
      return n;
    F[0] = 0;
    F[1] = 1;
    for(int i=2;i<=n;i++)
    {
        F[i] = F[i-2] + F[i-1];
    }
    return F[n];  
}
int main()
{
    int n;
    cout<<"Enter the value of n whose Fibonacci value u want to know:";
    cin>>n;
    int arr[100];
    for(int i=0;i<=n;i++)
    {
        arr[i] = -1;
    }
    // int ans = fibonacci_using_DP(arr,n);
    int ans = Fibonacci_Tabulation(n);
    cout<<"Fibonacci_Value of "<<n<<" is : "<<ans;
}