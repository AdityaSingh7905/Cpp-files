#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin >> n;
    int arr[n];
    cout<<"Enter the values in the array:";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int key;
    cout<<"Enter the element you want to search:";
    cin >> key;
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key)
        {
          ans = mid;
          break;
        }
        else if(arr[mid] > key)
          end = mid - 1;
        else 
          start = mid + 1; 

        mid = start + (end - start)/2;     
    }

    cout<<"Searched Element is present at index: "<<ans<<endl;

}