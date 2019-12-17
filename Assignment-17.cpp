#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void takeInput(string &s);
void sumofstring(string s);

int main()
{
    string s;
    takeInput(s);

    sumofstring(s);

    return 0;
}

void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}
void sumofstring(string s)
{
    string part1,part2;
    if(s.find("+")!=string::npos)
    {
        part1=s.substr(0,s.find("+"));
        part2=s.substr(s.find("+")+1);
    }
    int a = atoi(part1.c_str());
    int b = atoi(part2.c_str());
    cout<<endl;
    int sum = a + b;
    cout<<"The sum: "<<sum;
}
