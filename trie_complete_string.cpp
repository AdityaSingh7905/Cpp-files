#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node
{
    Node *node[26];
    bool flag;

    bool containsKey(char ch)
    {
        return node[ch - 'a'] != NULL;
    }

    void put(char ch, Node *newNode)
    {
        node[ch - 'a'] = newNode;
    }

    Node *get(char ch)
    {
        return node[ch - 'a'];
    }

    void setFlag()
    {
        flag = true;
    }

    bool hasFlag()
    {
        return flag == true;
    }
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
        root->flag = false;
    }

    void insert(string s)
    {
        Node *nnode = root;
        for (int i = 0; i < s.size(); i++)
        {
            if (!nnode->containsKey(s[i]))
            {
                Node *newNode = new Node();
                nnode->put(s[i], newNode);
            }
            nnode = nnode->get(s[i]);
        }
        nnode->setFlag();
    }

    int check(string s)
    {
        Node *nnode = root;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            Node *dumNode = nnode->get(s[i]);
            if (dumNode->hasFlag() == true)
            {
                cnt++;
            }
            nnode = dumNode;
        }
        return cnt;
    }
};

int main()
{
    cout << "Enter the size of the array of strings: ";
    int n;
    cin >> n;

    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Enter string " << (i + 1) << " : ";
        cin >> str;

        vec[i] = str;
    }

    Trie obj;

    for (int i = 0; i < n; i++)
    {
        obj.insert(vec[i]);
    }

    string ans = "";
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int len = vec[i].size();
        int cnt = obj.check(vec[i]);
        if (len == cnt && maxlen < len)
        {
            maxlen = len;
            ans = vec[i];
        }
    }

    cout << "Lexicographically largest complete string is: " << ans << endl;
}