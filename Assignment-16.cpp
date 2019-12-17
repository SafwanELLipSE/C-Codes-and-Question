#include<iostream>
#include<string>
using namespace std;

void takeInput(string &s);
void takervs(string s);
int main()
{
   string s;
   takeInput(s);
   //cout<<s<<endl;
   cout<<endl;
   takervs(s);
   cout<<endl;
   return 0;
}
void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}
void takervs(string s)
{
    int i,j,n = s.size(), c = 0;
    for (int i = 0,j = n - 1;i<j;i++,j--)
     {
        if (s[i] != s[j])
            c = 0;
        else
            c = 1;
     }
    if (c)
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
}











