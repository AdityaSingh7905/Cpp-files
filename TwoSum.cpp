#include<iostream>
using namespace std;

int main()
{
   int num[100],n,target;
   int arr[2];
   cout<<"Enter the size of the array: ";
   cin>>n;
   cout<<"Enter the elements in the array: ";
   for(int i=0;i<n;i++)
   {
       cin>>num[i];
   }
   cout<<"Enter the value of the target: ";
   cin>>target;
   int i=0;
   while(i<n){
      int j=i+1;
      while(j<n){
        if((num[i]+num[j]) == target){
            arr[0] = i;
            arr[1] = j;
            break;
        } 
        j++;
      }
      i++;
   }
   cout<<"Indices of the numbers whose sum is equal to the target: ";
   for(int k=0;k<2;k++)
   {
       cout<<arr[k];
   }

   return 0;
}
