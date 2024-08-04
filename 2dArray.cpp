#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           if(arr[i][j] == target){
            return 1;
           }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];
    // int arr[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // Row-wise Input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    //Column-wise Input
 /*   for(int col=0; col<4; col++){
        for(int row=0; row<3; row++){
            cin>>arr[row][col];
        }
    }
 */
    // Output
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cin >> target;
    if(isPresent(arr, target, 3,4)){
        cout<<"Element Found.."<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
}