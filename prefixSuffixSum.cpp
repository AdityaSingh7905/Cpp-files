#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}

int prefixSum(vector<int> &v, int ind)
{
    int sum = 0;
    for (int i = 0; i < ind; i++)
    {
        sum += v[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number of elements u want in the array:";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Elements entered in the array are:" << endl;
    print(v);
    int totSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        totSum += v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        int preSum = prefixSum(v, i);
        if (2 * preSum == totSum)
        {
            cout << "prefixSum and suffixSum of the array are equal..." << endl;
            break;
        }
    }
    cout << "prefixSum and suffixSum of the array are not equal..."<<endl;
}