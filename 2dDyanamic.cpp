#include<iostream>
using namespace std;

int main(){

    int row;
    cin >> row;

    int col;
    cin >> col;

    // Creating 2d Array dyanamically
    int** arr = new int*[row]; 
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //taking input in the array
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // outputting the array
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Never forgot to release memory
    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;
}