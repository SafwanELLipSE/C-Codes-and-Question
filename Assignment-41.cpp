#include<iostream>
#include<string>
using namespace std;

void takeInput(string &s);
void translateID(string s);
string convertYear(string s);
string convertSem(char c);

int main()
{
    string s;
    takeInput(s);
    translateID(s);

    return 0;
}

void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}

void translateID(string s)
{
    string year = convertYear(s.substr(0, 2));

    cout<<"Year: "<<year<<endl;

    cout<<"Semester: "
        <<convertSem(s[2])<<endl;

    cout<<"Unique ID: "
        <<s.substr(3)<<endl;
}

string convertYear(string s)
{
    return "20" + s;
}

string convertSem(char c)
{
    if (c == '1') return "Autumn";
    if (c == '2') return "Spring";
    return "Summer";
}

