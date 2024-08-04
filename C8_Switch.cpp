#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    int a,b;
    char ch;
    cout<<"Enter the operation u want to operate: ";
    cin>>ch;
    cout<<"Enter the numbers on which u want use the operation: ";
    cin>>a>>b;
    // cout<<a<<b;
    switch(ch)
    {
        case '+' :  cout<<"Sum of the numbers is: "<<a+b<<endl;
                    break;

        case '-' :  cout<<"Difference of the numbers is: "<<a-b<<endl;
                    break;

        case '*' :  cout<<"Product of the numbers is: "<<a*b<<endl;
                    break;

        case '%' :  cout<<"Modulus of the numbers is: "<<a%b<<endl;
                    break;

        case '/' :  cout<<"Division of the numbers is: "<<a/b<<endl;
                    break;

        default :   cout<<"Invalid Operation"<<endl;                                                

    }
    




}        