#include<iostream>

using namespace std;

int main()
{
    int y,m,d,x,z;
    cout<<"Enter The days: ";
    cin>>d;

    cout<<endl;

    y = d / 365;
    x = d % 365;
    m = x / 12;
    z = x % 12;

    cout<<y<<" years "<<m<<" months "<<z<<" days ";

    cout<<endl;

    return 0;
}



