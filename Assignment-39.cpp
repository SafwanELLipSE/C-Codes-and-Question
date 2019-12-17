#include<iostream>
#include<string>
using namespace std;

void takeInput(string &s);
bool isPalindrome(string s);

int main()
{
    string s;
    takeInput(s);

    if (isPalindrome(s))
        cout<<s<<" is a Palindrome\n";
    else
        cout<<s<<" is NOT a Palindrome\n";

    return 0;
}

void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}

bool isPalindrome(string s)
{
    string revS = "";

    for (int i = s.size() - 1;i >= 0;i--)
        revS = revS + s[i];

    if (s == revS) return true;
    return false;
}







