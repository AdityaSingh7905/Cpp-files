#include<iostream>
using namespace std;

#define pi 3.14
#define Area(r) (pi * (r) *(r))

int main(){
    int radius;
    cout <<"Enter the radius: ";
    cin >> radius;

    cout<<"The area of circle of radius " << radius <<" is " << Area(radius);
}