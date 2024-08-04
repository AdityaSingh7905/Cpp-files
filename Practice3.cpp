#include<iostream>
using namespace std;
 
int main()
{
    int row,col;
    cout<<"Enter the number of rows in the pattern: ";
    cin>>row;
    cout<<"Enter the number of columns in the pattern: ";
    cin>>col; 
    /*int i=1;
    // int j=1;
    // int count=1;
    while(i<=row)
    {   
        /*int j=1;
        while(j<=col)
        {
            cout<<i<<"\t";
            j+=1;
        }
        cout<<"\n";
        i=i+1; */
       
       /*int j=1;
        while(j<=col)
        {
            cout<<j<<"\t";
            j+=1;
        }
        cout<<"\n";
        i++;  */

       /* int j=1;
        while(j<=col)
        {
            cout<<count<<"\t";
            count+=1;
            j+=1;
        }
        cout<<"\n";
        i+=1;  */

        /*int j=1;
        while(j<=i)
        {
            cout<<"*"<<"\t";
            j+=1;
        }
        cout<<"\n";
        i+=1;  */

        /*int j=1;
        while(j<=i)
        {
            cout<<i<<"\t";
            j+=1;
        
        cout<<endl;
        i+=1;  */

        /*int count=i;
        int j=1;
        while(j<=i)
        {
            cout<<count<<"\t";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1; */

        /*int j=0;
        while(j<i)
        {
            cout<<i+j<<"\t";
            j+=1;
        }
        cout<<endl;
        i+=1; */

        /*int j=0;
        while(j<i)
        {
            cout<<i-j<<"\t";
            j+=1;
        }
        cout<<endl;
        i+=1; 
    }*/

    /*int i=0;
    while(i<row)
    {
        int j=1;
        int ch=65;
        while(j<=col)
        {
           cout<<char(ch+i)<<"\t";
           j+=1;
        }
        cout<<endl;
        ch+=1;
        i+=1; 
    } */

    /*int i=1;
    while(i<=row)
    {
        int j=0;
        while(j<col)
        {
            cout<<char('A'+j)<<"\t";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/

    /*int i=0;
    int count=0;
    while(i<row)
    {  
       int j=0;
       while(j<col)
       {
         cout<<char('A'+count)<<"\t";
         count+=1;
         j+=1;
       }
       cout<<endl;
       i+=1;
    }  */

    /*int i=0;
    while(i<row)
    {
        int j=0;
        while(j<col)
        {
           cout<<char('A'+i+j)<<"\t";
           j+=1;
        }
        cout<<endl;
        i+=1;
    }  */

    /*int i=0;
    while(i<row)
    {
        int j=0;
        while(j<=i)
        {
            cout<<char('A'+i)<<"\t";
            j+=1;
        }
        cout<<endl;
        i+=1;
    } */

    /*int i=1;
    int count=0;
    while(i<=row)
    {
        int j=1;
        while(j<=i)
        {
          cout<<char('A'+count)<<"\t";
          count+=1;
          j+=1;
        }
        cout<<endl;
        i+=1;
    }  */

    /*int i=0;
    char ch='A';
    while(i<row)
    {
        int j=0;
        while(j<=i)
        {
            cout<<char(ch+i+j)<<"\t";
            j+=1;
        }
        cout<<endl;
        i+=1;
    } */

    /*int i=1;
    while(i<=row)
    {
        int j=0;
        while(j<i)
        {
             cout<<char('A'+row-i+j)<<"\t";
             j+=1;
        }
        cout<<endl;
        i+=1;
    } */

    /*int i=1;
    while(i<=row)
    {
        int j=1;
        while(j<=col)
        {
            if(j<row-i+1)
            {
               cout<<"_";
            }
            else{
                cout<<"*";
            }
            cout<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    } */

    /*int i=1;
    while(i<=row)
    {   
        // Printing star 
        int star=row-i+1;
        while(star)
        {
            cout<<"*"<<"\t";
            star--;
        }
        cout<<endl;
        i++;
    }*/

    /*int i=1;
    while(i<=row)
    {
        int j=1;
        while(j<=col)
        {
            if(i>j)
            {
                cout<<"_"<<"\t";
            }
            else
            {
                cout<<"*"<<"\t";
            }
            j++;
        }
        cout<<endl;
        i++;
    }*/

    /*int i=1;
    while(i<=row)
    {
        int j=1;
        while(j<=col)
        {
            if(i>j)
            {
                cout<<"_"<<"\t";
            }
            else{
                cout<<i<<"\t";
            }
            j++;
        }
        cout<<endl;
        i++;
    }*/

    int i=1;
    while(i<=row)
    {
        int j=1;
        while(j<=col)
        {
            if(j<row-i+1)
            {
                cout<<"_"<<"\t";
            }
            else
            {
                cout<<i<<"\t";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    
}

