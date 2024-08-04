#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;

    switch(1)
    {
        case 1 :  
                 { int notes1 = amount /100;
                  amount = amount - (notes1 * 100);
                  cout<<"No. of 100 Rs notes required are: "<<notes1<<endl;
                 }

        case 2 :  
                 { int notes2 = amount / 50;
                  amount = amount - (notes2 * 50);
                  cout<<"No. of 50 Rs notes required are: "<<notes2<<endl;
                 }

        case 3 :  
                 { int notes3 = amount / 20;
                  amount -= notes3 * 20;
                  cout<<"No. of 20 Rs notes required are: "<<notes3<<endl;
                 }

        case 4 :  
                 { int notes4 = amount;
                  cout<<"No. of 1 Rs notes required are: "<<notes4<<endl;
                  }
}
    }

    
    
    
   