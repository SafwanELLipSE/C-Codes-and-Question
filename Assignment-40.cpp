#include<iostream>
#include<string>
using namespace std;

void takeInput(string &s);
string convertUpperToLowerAndViceVersa(string s);

int main()
{
    string s;
    takeInput(s);

    //cout<<(int)'A'<<endl;
    string newS = convertUpperToLowerAndViceVersa(s);
    cout<<newS<<endl;

    return 0;
}

void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}

string convertUpperToLowerAndViceVersa(string s)
{
    for (int i = 0;i < s.length();i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);
            //s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            //s[i] += 32;
            s[i] = tolower(s[i]);
    }

    return s;
}



