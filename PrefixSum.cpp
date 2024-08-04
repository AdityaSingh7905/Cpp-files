#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}

void prefixSum(vector<int> &v){
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
        v[i] = sum;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin >> n;
    vector<int> v;
    cout<<"Enter elements in the array:";
    for(int i=0; i<n; i++){
       int element;
       cin >> element;
       v.push_back(element);
    }
    cout<<"Printing the elements in the array:";
    print(v);
    prefixSum(v);
    cout<<"After runningSum/prefixSum, the elements of the array:";
    print(v);
}