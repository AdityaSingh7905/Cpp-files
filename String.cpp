#include<iostream>
#include <bits/stdc++.h> 
#include<string>
using namespace std;

bool isValidChar(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a'&& ch<='z') || (ch>='0' && ch<='9')){
        return true;
    }
    else{
        return false;
    }
}
char isLower(char ch){
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    int start = 0;
    int end = s.length() - 1;
    while(start < end){
        if(isValidChar(s[start]) && isValidChar(s[end])){
            if(isLower(s[start]) != isLower(s[end])){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        else{
            if(!isValidChar(s[start])){
                start++;
            }
            if(!isValidChar(s[end])){
                end--;
            }
            
        }
    }
    
    return 1;
}
int main(){
    string s = "AdityaSingh";
    string s1 = "Noon";
    string s2 = "N2 i&nJA?a& jnI2n";
    cout<<"palindrome or not: "<<checkPalindrome(s2);
}