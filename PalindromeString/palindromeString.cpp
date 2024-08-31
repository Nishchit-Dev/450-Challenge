#include<stdio.h>
#include<iostream>

using namespace std;

bool checkStringPalindrome(string s,int i=0){

    int iterator = s.length();
    if(i >= iterator/2)
    {
        cout<<"palindrome";
        return true;
    }else{
        if(s[i] != s[iterator - i - 1]){
            cout<<"not palindrome";
            return false;
        }else{
            cout<<"checking palindrome\n";
            checkStringPalindrome(s,i+1);
        }
    }

}

int main(){
    string str = "kek";

    bool result = checkStringPalindrome(str);

    cout<<"\n"<< result;
}