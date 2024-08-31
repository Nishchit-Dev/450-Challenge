#include <stdio.h>
#include <iostream>

using namespace std;

string removeSpace(string &s)
{
    string newString = "";
    int i = 0;
    while (i < s.length())
    {
        // cout<< s[i];
        if (isalpha(s[i]))
        {
            newString += tolower(s[i]);
        }
        else if (isdigit(s[i]))
        {
            newString += tolower(s[i]);
        }
        i++;
    }

    return newString;
}

bool checkStringPalindrome(string s, int i = 0)
{

    int iterator = s.length();
    if (i >= iterator / 2)
    {
        cout << "palindrome";
        return true;
    }
    else
    {
        if (s[i] != s[iterator - i - 1])
        {
            cout << "not palindrome";
            return false;
        }
        return checkStringPalindrome(s, i + 1);
    }
}

void removeSpaceOptmized(string &s)
{
    int j = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
        {
            s[j++] = tolower(s[i]);
        }
    }
    s.resize(j); // Resize the string to remove extra characters
}

bool isPalindromeOptmized(string s)
{
    removeSpace(s);

    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main()
{   
    string str = "madam";

    cout<< isPalindromeOptmized(str);

}