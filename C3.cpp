#include<iostream>
using namespace std;

int main()
{
    /*int a=4;
    int b=6;

    cout <<" a&b: "<< (a&b) << endl;
    cout <<" a|b: "<< (a|b) << endl;
    cout <<" ~a: "<< (~a) << endl;
    cout <<" a^b: "<< (a^b) << endl;

    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (19<<2) << endl; */

    for(int i=0;i<5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            cout<<i<<" "<< j << endl;
        }
    }
}