#include<iostream>
#include<vector>
using namespace std;

// 0-based indexing 0 1 2 3 4 5 ......n-1
// 1-based indexing 1 2 3 4 5 ........n
// create array of size n+1.....indexing 0 1 2 3 4.......n

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    // calculate prefix Sum of the array
    for(int i=1; i<=n; i++){
        v[i] += v[i-1];
    }
    // take from user number of query inputs
    int query;
    cout<<"Enter the number of query u want to give??";
    cin>>query;

    while(query--){
        int l, r;
        cout<<"Enter the value of l: ";
        cin >> l;
        cout<<"Enter the value of r: ";
        cin >> r;
        int ans = 0;
        ans = v[r] - v[l-1];
        cout<<"Sum of the values between indices l and r(including them) are: "<<ans<<endl;
    }
}