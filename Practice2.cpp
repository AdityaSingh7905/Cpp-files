#include<iostream>
using namespace std;

int main()
{
    /*int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // Using While Loop
    int i=1;
    int sum=0;

    while(i<=n)
    {
        if(i%2==0){
            sum = sum + i;
        }
        i=i+1;
    }
    cout<<"The value of the sum is :"<<sum<<endl;

    // Using For loop
    int sum1=0;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum1+=i;
        }
    }
    cout<<"THe value of the sum1 is: "<<sum1<<endl; */

    /*int n;
    cout<<"Enter the number whom you want to check whether it is a prime number or not: ";
    cin>>n;

    int i=1;
    int c=0;

    while(i<=n)
    {
        if(n%i==0){
            c++;
        }
        i++;
    }
    if(c==2)
    {
        cout<<"The given number is a prime number."<<endl;

    }    
    else{
        cout<<"The given number is not a prime number.."<<endl;

    }   */
    int row,col;
    cout<<"Enter the number of rows in the pattern: ";
    cin>>row;
    cout<<"Enter the number of columns in the pattern: ";
    cin>>col; 
    int i=0;
    while(i<row)
    {   
        int j=0;
        while(j<col)
        {
            cout<<" * ";
            j+=1;
        }
        cout<<"\n";
        i=i+1;
    }
}