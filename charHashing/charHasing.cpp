#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countElement(vector<char> v)
{
}

int main()
{
    string str;
    cin >> str;

    int max = 0;
    string charMax = "";
    string charMin = "";

    int min = 99999;
    map<char, int> map;
    cout << str;
    int hash[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i] - 'a']++;
        map[str[i]]++;
        if (max < hash[str[i] - 'a'])
        {
            max = hash[str[i] - 'a'];
            charMax = str[i];
        }
        cout << hash[str[i] - 'a'] << " > " << str[i] << endl;
    }

    for (int i = 0; i < str.length(); i++)
    {
        cout << hash[str[i] - 'a'] << endl;
    }

    cout << "Max -> " << charMax << " count -> " << max << endl;
    cout << "Min -> " << charMin << " count -> " << min << endl;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] <<" -> "<<map[str[i]]<<endl;
    }
}