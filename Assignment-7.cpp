#include<iostream>
using namespace std;

int main()
{
    int palindrome, rvs = 0;
    cout<<"enter the number: ";
    cin>>palindrome;
    int num = 0,key = palindrome;
    for(int i=1;palindrome != 0;i++)
    {
       num = palindrome % 10;
       palindrome /= 10;
       rvs = num + (rvs * 10);
    }
    if (rvs == key)
        cout<<key<<" is a palindrome number.";
    else
        cout<<key<<" is not a palindrome number.";
    return 0;
}
