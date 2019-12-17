#include<iostream>
using namespace std;

int main()
{
    int h;
    cout<<"Enter Height: ";
    cin>>h;

    cout<<endl;

    for (int i = 1;i <= h;i++)
    {

        for (int j = 1;j <= h - i;j++)
            cout<<" ";

        for (int j = 1;j <= i;j++)
            if (i%2 == 0)
                cout<<"E";
            else
                cout<<"B";

        cout<<endl;}

    return 0;
}
