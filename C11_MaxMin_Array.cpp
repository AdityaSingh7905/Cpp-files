#include<iostream>
using namespace std;

void MaxInArray(int arr[],int size)
{
    int max = arr[0];
    int i=0;
    while(i<size)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        i++;
    }

    cout<<"Maximum value in array is: "<<max<<endl;
    return ;
}

void MinInArray(int arr[],int size)
{
    int min = arr[0];
    int i=0;
    while(i<size)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
        i++;
    }

    cout<<"Minimum value in array is: "<<min<<endl;
    return ;
}
int main()
{
    /*int arr[5];
    std::fill_n(arr,5,9);

    int i=0;
    while(i<5)
    {
        cout<<arr[i]<<"\t";
        i++;
    }  */
    
    int n;   // n should not be greater than 100
    cout<<"Enter the size of array: ";
    cin>>n; 

    int arr[100];
    cout<<"Enter the values in array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<<"Printing the array: ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<endl;
   
    MaxInArray(arr,n);
    MinInArray(arr,n);

}
        