#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the value of character: ";
    cin>>ch;

    if(ch>='a'&& ch<='z'){
        cout<<"This is a lowercase alphabet";
    }
    else if (ch>='A' && ch<='Z'){
        cout<<"This is an uppercase alphabet";
    }
    if(ch>='0' && ch<='9'){
        cout<<"THis is numeric";
    }
}