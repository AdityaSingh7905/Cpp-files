#include<iostream>
#include<math.h>
using namespace std;

int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}

int Calculate_Combination(int n,int r)
{
    int ans = Factorial(n)/(Factorial(r)*Factorial(n-r)) ;
    return ans;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<"Enter the value of r: ";
    cin>>r;

    int answer = Calculate_Combination(n,r);
    cout<<"Answer is: "<<answer;
}