#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Please Enter Three Variable: ";
    cin>>a>>b>>c;

    /*if (a >= b && b >= c)
        cout<<"2.Second Max is "<<b<<endl;

    else if (b >= a && a >= c)
        cout<<"1.Second Max is "<<a<<endl;

    else if (b <= c && c <=a || a <=c && c <= b)
        cout<<"3.Second Max is "<<c<<endl;*/
    int mim = a;
    if (mim < b)
        mim = a;
    if (mim < c)
        mim = b;
    cout<<"2nd mim  is "<<mim<<endl;

    return 0;
}
