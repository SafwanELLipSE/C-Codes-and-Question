#include<iostream>
#include<string>
using namespace std;

void takeInput(string &s);
int comparison(string s, string t);
string concatenate(string s, string t);
void printSpaceSeparated(string s);
int findCinS(string s, char c);

int main()
{
    string s;
   

    takeInput(s);
 
    char c;
    cout<<"Enter Character: ";
    cin>>c;

    int loc = findCinS(s, c);
    if (loc != -1)
        cout<<c<<" found at location "
            <<loc<<endl;
    else
        cout<<c<<" not found\n";

    return 0;
}

void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}

int comparison(string s, string t)
{
    if (s > t) return 1;
    else if (s < t) return -1;
    return 0;
}

string concatenate(string s, string t)
{
    string f = s + " " + t;
    return f;
}

void printSpaceSeparated(string s)
{
    for (int i = 0;i < s.size();i++)
    {
        cout<<s.at(i)<<" ";
    }
}

int findCinS(string s, char c)
{
    if (s.find(c) != string::npos)
        return s.find(c);
    return -1;
}





