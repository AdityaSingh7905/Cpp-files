#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter the value of string: ";
    cin >> s;
    string result;
    for(char ch: s){
        if(!result.empty() && ch == result.back()){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
    }
    cout << "Final String after removing all the adjacent duplicates: " << result << endl;
}