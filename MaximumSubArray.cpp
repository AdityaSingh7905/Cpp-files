#include<iostream>
#include<algorithm>
using namespace std;

int Crossing_SubArray(int arr[],int low,int mid,int high)
{
    int sum1 = 0;
    int max1 = INT_MIN;
    for(int i=mid;i>=0;i--)
    {
        sum1 = sum1 + arr[i];
        max1 = max(max1,sum1); 
    }
    int sum2 = 0;
    int max2 = INT_MIN;
    for(int j=mid+1;j<=high;j++)
    {
         sum2 = sum2 + arr[j];
         max2 = max(max2,sum2);
    }

    return max1 + max2;
}
int Max_SubarraySum(int arr[] , int low , int high)
{
    // Base Condition
    if(high==low)
      return arr[low];

    int mid = (low + high)/2;
    int left_array = Max_SubarraySum(arr , low , mid);
    int right_array = Max_SubarraySum(arr , mid+1 , high); 
    int crossing_array = Crossing_SubArray(arr , low , mid , high);

    return max({left_array , right_array , crossing_array}); 
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[100];
    cout<<"Enter the values in the array:";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int answer = Max_SubarraySum(arr , 0 , n-1);
    cout<<"Maximum sum of contiguous Subarray is: "<<answer;

}