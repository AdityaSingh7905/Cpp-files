#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node
{
    Node *node[26];
    bool flag;
    int cntEndsWith;
    int cntPrefix;

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

    void setFlag(bool flag1)
    {
        flag = flag1;
    }

    bool hasFlag()
    {
        return flag == true;
    }

    void increaseEndsWith()
    {
        cntEndsWith++;
    }

    void increaseCntPrefix()
    {
        cntPrefix++;
    }

    void decreaseEndsWith()
    {
        cntEndsWith--;
    }

    void decreaseCntPrefix()
    {
        cntPrefix--;
    }

    int getCntPrefix()
    {
        return cntPrefix;
    }

    int getCntString()
    {
        return cntEndsWith;
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
        root->cntEndsWith = 0;
        root->cntPrefix = 0;
    }

    void insert(string s)
    {
        Node *dumNode = root;

        for (int i = 0; i < s.size(); i++)
        {
            if (!dumNode->containsKey(s[i]))
            {
                Node *newNode = new Node();
                dumNode->put(s[i], newNode);
            }
            dumNode = dumNode->get(s[i]);
            dumNode->increaseCntPrefix();
        }
        dumNode->increaseEndsWith();
        dumNode->setFlag(true);
    }

    bool search(string s)
    {
        Node *dumNode = root;

        for (int i = 0; i < s.size(); i++)
        {
            if (!dumNode->containsKey(s[i]))
            {
                return false;
            }
            dumNode = dumNode->get(s[i]);
        }
        if (dumNode->hasFlag())
        {
            return true;
        }
        return false;
    }

    bool prefixSearch(string s)
    {
        Node *dumNode = root;
        for (int i = 0; i < s.size(); i++)
        {
            if (!dumNode->containsKey(s[i]))
            {
                return false;
            }
            dumNode = dumNode->get(s[i]);
        }
        return true;
    }

    void erase(string s)
    {
        Node *dumNode = root;
        for (int i = 0; i < s.size(); i++)
        {
            if (!dumNode->containsKey(s[i]))
            {
                return;
            }
            dumNode = dumNode->get(s[i]);
            dumNode->decreaseCntPrefix();
        }
        dumNode->decreaseEndsWith();
        dumNode->setFlag(false);
    }

    int countOfWords(string s)
    {
        // cout << "Hii, I am Aditya Singh 1" << endl;
        Node *dumNode = root;

        for (int i = 0; i < s.size(); i++)
        {
            if (!dumNode->containsKey(s[i]))
            {
                return 0;
            }
            dumNode = dumNode->get(s[i]);
        }

        // cout << "Hii, I am Aditya Singh 2" << endl;
        return dumNode->getCntString();
    }

    int cntPrefixString(string s)
    {
        Node *dumNode = root;

        for (int i = 0; i < s.size(); i++)
        {
            if (!dumNode->containsKey(s[i]))
            {
                return 0;
            }
            dumNode = dumNode->get(s[i]);
        }
        return dumNode->getCntPrefix();
    }
};

int main()
{

    // int n;
    // cout << "Enter the size of the array of strings: " << endl;
    // cin >> n;

    // vector<string> arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter string" << i << " : ";
    //     cin >> arr[i];
    // }

    Trie obj1;

    // 1 for inserting a string
    // 2 for searching a string
    // 3 for searching a prefix
    // 0 for exit;

    // int n = 4;
    while (true)
    {
        cout << "Enter 1 for inserting a string\nEnter 2 for searching a string\nEnter 3 for searching a prefix String\nEnter 4 for checking count of a given string in the trie\nEnter 5 for checking no of strings with given prefix\nEnter 6 for erasing a given string\nEnter 7 for continuing\nEnter 0 for exiting: " << endl;
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << "Enter your string... " << endl;
            string str;
            cin >> str;
            obj1.insert(str);
            cout << "String inserted successfully." << endl;
        }
        else if (x == 2)
        {
            cout << "Enter the string that u wanna search..." << endl;
            string str;
            cin >> str;
            if (obj1.search(str))
            {
                cout << "String is present in the trie." << endl;
            }
            else
            {
                cout << "String is not present in the trie." << endl;
            }
        }
        else if (x == 3)
        {
            cout << "Enter the prefix that u wanna search..." << endl;
            string pre;
            cin >> pre;
            if (obj1.prefixSearch(pre))
            {
                cout << "Prefix is present in the trie." << endl;
            }
            else
            {
                cout << "Prefix is not present in the trie." << endl;
            }
        }
        else if (x == 4)
        {
            cout << "Enter the string whose count u wanna check..." << endl;
            string str;
            cin >> str;
            cout << "Count of string in trie: " << obj1.countOfWords(str) << endl;
        }
        else if (x == 5)
        {
            cout << "Enter the prefix for checking no of strings with the same prefix..." << endl;
            string str;
            cin >> str;
            cout << "Number of strings with given prefix: " << obj1.cntPrefixString(str) << endl;
        }
        else if (x == 6)
        {
            cout << "Enter the string u want to delete from trie..." << endl;
            string str;
            cin >> str;
            obj1.erase(str);
            cout << "String is successfully deleted..." << endl;
        }
        else if (x == 7)
        {
            continue;
        }
        else if (x == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid input. Please try again. Sorry for inconvenience." << endl;
            continue;
        }
    }
}