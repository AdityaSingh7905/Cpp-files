#include<iostream>
using namespace std;

void Setbits()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    int c=0;
    while( a!=0)
    {
        int bit = a & 1;
        if(bit==1)
        {
            c++;
        }
        a = a>>1;
    }

    while(b!=0)
    {
        int bit = b & 1;
        if(bit==1)
        {
            c++;
        }
        b = b>>1;
    }

    cout<<"Total no. of set bits in a and b is: "<<c<<endl;
}
int main()
{
    Setbits();
}