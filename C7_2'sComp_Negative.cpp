#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the negative number whose 2's complement u want to know: ";
   cin>>n;

   int m = -n;  // ignoring the negative term
   // cout<<m;
   int ans[32];
   int i=0;
   int j=31;
   while(i<32)
   {
       int bit = m & 1;
       if(bit == 1){              //  For calculating 1's complement
         ans[j] = 0;
       }
       else{
         ans[j] = 1;
       }
       m = m>>1;
       j-=1;
       i+=1;

   }

   // For calculating 2's complement
   int carry = 1;
   int l=31;
   int c=0;
   while(l>=0)
   {
      if(ans[l]==1 && carry==1)
      {
         ans[l] = 0;
         carry=1;
         c++;
      }
      else if(ans[l]==0 && carry==1)
      {
         ans[l] = 1;
         carry = 0;
         c++;
         break;
      }
      l--;
   }
   // Printing the 2's complement of the given negative number 
   cout<<"c: "<<c<<endl;
   cout<<"Printing the 2's complement of the given negative number: ";
   int p=0;
   while(p<=31){
      cout<<ans[p];
      p+=1;
   }   

}