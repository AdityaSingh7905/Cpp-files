#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}

string calculateGCD(vector<string> v, int n)
{
    if (n == 1)
        return v[0];
    string ans = v[0];
    if (isdigit(ans[0]))
        ans = "+" + ans;
    for (int i = 1; i < n; i++)
    {
        string s = v[i];
        int num1 = stoi(ans.substr(1, ans.find('/') - 1));
        int den1 = stoi(ans.substr(ans.find('/') + 1));
        int num2 = stoi(s.substr(1, s.find('/') - 1));
        int den2 = stoi(s.substr(s.find('/') + 1));
        if (ans[0] == '-')
            num1 = -num1;
        if (s[0] == '-')
            num2 = -num2;
        int numerator = num1 * den2 + num2 * den1;
        int denominator = den1 * den2;
        // int dummyNumerator = numerator < 0 ? -numerator : numerator;
        int GCD = gcd(abs(numerator), denominator);
        numerator = numerator / GCD;
        denominator = denominator / GCD;
        ans = (numerator < 0 ? "-" : "+") + to_string(abs(numerator)) +
              "/" + to_string(denominator);
    }
    return ans[0] == '+' ? ans.substr(1) : ans;
}

string fractionAddition(string expression)
{
    int n = expression.size();
    vector<string> v;
    int i = 0;
    string ans = "";
    while (i < n)
    {
        if (expression[i] == '/')
        {
            ans = ans + '/';
            i = i + 1;
            while (i != n && expression[i] != '-' && expression[i] != '+')
            {
                ans = ans + expression[i];
                i++;
            }
            v.push_back(ans);
            ans = "";
        }
        else
        {
            ans = ans + expression[i];
            i++;
        }
    }
    return calculateGCD(v, v.size());
}

int main()
{
    string s;
    cout << "Enter the fraction expression including sign with each fraction: ";
    cin >> s;
    cout << fractionAddition(s) << endl;
}