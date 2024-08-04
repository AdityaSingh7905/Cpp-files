#include<iostream>
using namespace std;

int Pivot(int arr[], int n)
{
   int start = 0;
   int end = n - 1;
   int mid = start + (end-start)/2;
   while(start < end){
      if(arr[0] <= arr[mid])
        start = mid + 1;
      else{
        end = mid;
      }  
      mid = start + (end-start)/2;
   }
   return start;
}

int main(){
   // pivot element is the minimum element in sorted and rotated array
   int arr[5] = {3, 7, 9, 1, 2};
//    int n = sizeof(arr);
//    cout<<"Size of the array is: "<<n<<endl;
   int ans = Pivot(arr, 5);
   cout<<"Pivot Element is present at index: "<<ans<<endl;
}