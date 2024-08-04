#include<iostream>
#include<vector>
using namespace std;

void PrintArray(int arr[][3], int m, int n){
     cout<<"Printing the elements of the array: ";
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j];
        }
     }
}

void RowSum(int arr[][3], int m, int n){
    cout<<"Printing the sum of rows: "<<endl;
    for(int i=0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
        cout<<"Sum of "<<i<<" index row: "<<sum;
        cout<<endl;
    }
    
}
void ColSum(int arr[][3], int m, int n){
    cout<<"Printing the sum of columns: "<<endl;
    for(int j=0; j<n; j++){
        int sum =0;
        for(int i=0; i<m; i++){
            sum += arr[i][j];
        }
        cout<<"Sum of "<<j<<" index column: "<<sum;
        cout<<endl;
    }
}

void LargestRowSum(int arr[][3], int m, int n){
    int max = INT_MIN;
    int index = -1;
    for(int i=0; i<m; i++){
        int sum =0;
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
        if(max < sum){
            max = sum;
            index = i;
        }

    }
    cout<<index<<" index row is the row with the largest sum."<<endl;
}

int main(){
    // int m, n;
    // cout<<"Enter the number of rows u want in your array: ";
    // cin >> m;
    // cout<<"Enter the number of columns u want in your array: ";
    // cin >> n;

    int arr[3][3];
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    RowSum(arr,3,3);
    ColSum(arr,3,3);
    LargestRowSum(arr,3,3);
}