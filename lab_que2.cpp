#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    unordered_map<string, int> mpp;
    string temp = "";
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            if (!temp.empty())
            {
                mpp[temp]++;
                temp = "";
            }
        }
        else
        {
            temp += text[i];
        }
    }
    if (!temp.empty())
    {
        mpp[temp]++;
    }
    for (const auto& it : mpp)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
