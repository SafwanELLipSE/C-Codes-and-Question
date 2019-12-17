#include<iostream>
using namespace std;

int main()
{
    int c,q,d,n,p,x,y,z;
    cout<<"Enter The cents: ";
    cin>>c;

    cout<<endl;

    q = c / 25;
    x = c % 25;
    d = x / 10;
    y = x % 10;
    n = y / 5;
    z = y % 5;


    cout<<q<<" quarters "<<d<<" dime "<<n<<" nickel "<<z<<" pennies ";

    cout<<endl;

    return 0;
}



